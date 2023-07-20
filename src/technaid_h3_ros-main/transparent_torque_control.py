# !/usr/bin/env python3

import rospy
from h3_msgs.msg import State
from std_msgs.msg import Float64, Float64MultiArray
import math
import tkinter as tk
from tkinter import ttk
import matplotlib.pyplot as plt


class spring_controller:
    def __init__(self):
        self.ankle_theta = 0
        self.knee_theta = 0
        self.anle_theta_dot = 0
        self.knee_theta_dot = 0
        self.ankle_net_torque = 0
        self.knee_net_torque = 0
        self.ankle_torque_cmd = 0
        self.knee_torque_cmd = 0
        self.ankle_motor_torque = 0
        self.knee_motor_torque = 0
        self.output_ls = []
        self.input_ls = []

        self.mode = "transparent"

        self.bias = 0.4
        self.stiffness = 50
        self.damping = 3
        self.ratio = 0.9

        #GUI init
        self.root = tk.Tk()
        self.root.title("Parameter Settings")

        # Creating and placing the labels
        bias_label = ttk.Label(self.root, text="Bias")
        bias_label.grid(row=0, column=0, padx=10, pady=5)
        stiffness_label = ttk.Label(self.root, text="Stiffness")
        stiffness_label.grid(row=1, column=0, padx=10, pady=5)
        damping_label = ttk.Label(self.root, text="Damping")
        damping_label.grid(row=2, column=0, padx=10, pady=5)
        ratio_label = ttk.Label(self.root, text="Ratio (0 to 1)")
        ratio_label.grid(row=3, column=0, padx=10, pady=5)
        mode_label = ttk.Label(self.root, text="Mode")
        mode_label.grid(row=4, column=0, padx=10, pady=5)

        # Creating and placing the scales (sliders)
        self.bias_scale = ttk.Scale(self.root, from_=0, to=1, length=200, orient=tk.HORIZONTAL, command=lambda x: bias_var.set(float(x)))
        self.bias_scale.grid(row=0, column=1, padx=10, pady=5)
        self.stiffness_scale = ttk.Scale(self.root, from_=0, to=100, length=200, orient=tk.HORIZONTAL, command=lambda x: stiffness_var.set(int(float(x))))
        self.stiffness_scale.grid(row=1, column=1, padx=10, pady=5)
        self.damping_scale = ttk.Scale(self.root, from_=0, to=20, length=200, orient=tk.HORIZONTAL, command=lambda x: damping_var.set(int(float(x))))
        self.damping_scale.grid(row=2, column=1, padx=10, pady=5)

        # Creating and placing the ratio input box
        self.ratio_entry = ttk.Entry(self.root)
        self.ratio_entry.grid(row=3, column=1, padx=10, pady=5)

        # Creating and placing the mode dropdown button
        self.mode_combobox = ttk.Combobox(self.root, values=["transparent", "sine", "coupled"])
        self.mode_combobox.grid(row=4, column=1, padx=10, pady=5)
        self.mode_combobox.current(0)  # Set ankle_torque_cmd the initial selected mode

        # Creating and placing the value labels
        bias_var = tk.DoubleVar()
        bias_value_label = ttk.Label(self.root, textvariable=bias_var)
        bias_value_label.grid(row=0, column=2, padx=10, pady=5)
        stiffness_var = tk.IntVar()
        stiffness_value_label = ttk.Label(self.root, textvariable=stiffness_var)
        stiffness_value_label.grid(row=1, column=2, padx=10, pady=5)
        damping_var = tk.IntVar()
        damping_value_label = ttk.Label(self.root, textvariable=damping_var)
        damping_value_label.grid(row=2, column=2, padx=10, pady=5)

        # Creating and placing the min and max labels for bias
        bias_min_label = ttk.Label(self.root, text="0")
        bias_min_label.grid(row=0, column=1, sticky="W")
        bias_max_label = ttk.Label(self.root, text="1")
        bias_max_label.grid(row=0, column=1, sticky="E")

        # Creating and placing the min and max labels for stiffness
        stiffness_min_label = ttk.Label(self.root, text="0")
        stiffness_min_label.grid(row=1, column=1, sticky="W")
        stiffness_max_label = ttk.Label(self.root, text="100")
        stiffness_max_label.grid(row=1, column=1, sticky="E")

        # Creating and placing the min and max labels for damping
        damping_min_label = ttk.Label(self.root, text="0")
        damping_min_label.grid(row=2, column=1, sticky="W")
        damping_max_label = ttk.Label(self.root, text="20")
        damping_max_label.grid(row=2, column=1, sticky="E")

        # Creating and placing the update button
        update_button = ttk.Button(self.root, text="Update", command=self.update_parameters)
        update_button.grid(row=5, column=0, columnspan=3, padx=10, pady=10)

    def update_parameters(self):
        self.bias = self.bias_scale.get()
        self.stiffness = self.stiffness_scale.get()
        self.damping = self.damping_scale.get()
        self.mode = self.mode_combobox.get()
        self.ratio = self.ratio_entry.get()
        
        # Here, you can perform any actions or call functions that use the updated parameters
        
        print("Bias:", self.bias )
        print("Stiffness:", self.stiffness)
        print("Damping:", self.damping)
        print("Ratio:",self.ratio)
        print("Mode:", self.mode)


    def spring_control(self):
        rospy.loginfo("Initialized!")
        # rospy.loginfo(self.theta)
        rate = rospy.Rate(100) # 10hz
        pub_ankle_left = rospy.Publisher('/h3/left_ankle_effort_controller/command', Float64, queue_size=10)
        #pub_ankle_net = rospy.Publisher('left_ankle_net_torque',Float64,queue_size=10)
        pub_knee_left = rospy.Publisher('/h3/left_knee_effort_controller/command', Float64, queue_size=10)
        rospy.Subscriber('/h3/robot_states', State, self.sensor_callback)
        t = 0

        while not rospy.is_shutdown():
            hello_str = "hello world %s" % rospy.get_time()
            if self.mode == "transparent":
                # transparent control for the ankle jointtorque: 
                self.ankle_torque_cmd = self.ankle_torque_cmd*(1 - float(self.ratio)) + self.ankle_net_torque*float(self.ratio)
                #rospy.loginfo(-self.ankle_torque_cmd*5)
                pub_ankle_left.publish(-self.ankle_torque_cmd*5)
                #pub_ankle_net.publish(self.ankle_net_torque)
                self.input_ls.append(self.ankle_net_torque)
                rospy.loginfo(self.input_ls)
                #rospy.loginfo(f"ankle: {self.ankle_net_torque}")

                # transparent control for the knee joint:
                self.knee_torque_cmd = self.knee_torque_cmd*(1 - float(self.ratio))+ self.knee_net_torque*float(self.ratio)
                #rospy.loginfo(-self.knee_torque_cmd*5)
                pub_knee_left.publish(-self.knee_torque_cmd*5)
                #rospy.loginfo(f"knee: {self.knee_net_torque}")

            elif self.mode == "sine":
                torque = 10*math.sin(0.5*2*math.pi*t/100)
                rospy.loginfo(torque)
                pub_ankle_left.publish(torque)
                pub_knee_left.publish(torque)

            elif self.mode == "coupled":
                # spring damper on ankle, based on knee position: 
                torque = self.stiffness*(self.ankle_theta+self.knee_theta-self.bias) + self.damping*self.ankle_theta_dot
                rospy.loginfo(torque)
                pub_ankle_left.publish(torque)

                # transparent control for the knee joint:
                self.knee_torque_cmd = self.knee_torque_cmd*0.3 + self.knee_net_torque*0.7
                pub_knee_left.publish(-self.knee_torque_cmd*5)
            self.root.update()
            rate.sleep()
            t = t + 1

        torque = 0
        pub_ankle_left.publish(torque)
        pub_knee_left.publish(torque)
        rospy.loginfo(torque)


    def sensor_callback(self, sensor_reading):
        self.ankle_theta = sensor_reading.joint_position[-1]
        self.ankle_theta_dot = sensor_reading.joint_velocity[-1]
        self.ankle_net_torque = sensor_reading.joint_torque_sensor[-1]
        self.ankle_motor_torque = sensor_reading.joint_motor_torque[-1]
        self.knee_theta = sensor_reading.joint_position[-2]
        self.knee_theta_dot = sensor_reading.joint_velocity[-2]
        self.knee_net_torque = sensor_reading.joint_torque_sensor[-2]
        self.knee_motor_torque = sensor_reading.joint_motor_torque[-2]


if __name__ == '__main__':
    rospy.init_node('ankle_spring', anonymous=True)
    rospy.loginfo("Initialized!")
    sc = spring_controller()
    sc.spring_control()
    


