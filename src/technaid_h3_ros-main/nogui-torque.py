# !/usr/bin/env python3

import rospy
from h3_msgs.msg import State
from std_msgs.msg import Float64, Float64MultiArray
import math
import tkinter as tk
from tkinter import ttk



class spring_controller:
    def __init__(self):
        self.theta = 0
        self.knee_theta = 0
        self.theta_dot = 0
        self.net_torque = 0
        self.torque_cmd = 0
        self.motor_torque = 0
        self.bias = 0
        self.stiffness = 50
        self.damping = 0

        #GUI init
        # self.root = tk.Tk()
        # self.root.title("Parameter Settings")

        # # Creating and placing the labels
        # bias_label = ttk.Label(self.root, text="Bias")
        # bias_label.grid(row=0, column=0, padx=10, pady=5)
        # stiffness_label = ttk.Label(self.root, text="Stiffness")
        # stiffness_label.grid(row=1, column=0, padx=10, pady=5)
        # damping_label = ttk.Label(self.root, text="Damping")
        # damping_label.grid(row=2, column=0, padx=10, pady=5)

        # # Creating and placing the scales (sliders)
        # self.bias_scale = ttk.Scale(self.root, from_=0, to=1, length=200, orient=tk.HORIZONTAL, command=lambda x: bias_var.set(float(x)))
        # self.bias_scale.grid(row=0, column=1, padx=10, pady=5)
        # self.stiffness_scale = ttk.Scale(self.root, from_=0, to=100, length=200, orient=tk.HORIZONTAL, command=lambda x: stiffness_var.set(int(float(x))))
        # self.stiffness_scale.grid(row=1, column=1, padx=10, pady=5)
        # self.damping_scale = ttk.Scale(self.root, from_=0, to=20, length=200, orient=tk.HORIZONTAL, command=lambda x: damping_var.set(int(float(x))))
        # self.damping_scale.grid(row=2, column=1, padx=10, pady=5)

        # # Creating and placing the value labels
        # bias_var = tk.DoubleVar()
        # bias_value_label = ttk.Label(self.root, textvariable=bias_var)
        # bias_value_label.grid(row=0, column=2, padx=10, pady=5)
        # stiffness_var = tk.IntVar()
        # stiffness_value_label = ttk.Label(self.root, textvariable=stiffness_var)
        # stiffness_value_label.grid(row=1, column=2, padx=10, pady=5)
        # damping_var = tk.IntVar()
        # damping_value_label = ttk.Label(self.root, textvariable=damping_var)
        # damping_value_label.grid(row=2, column=2, padx=10, pady=5)

        # # Creating and placing the min and max labels for bias
        # bias_min_label = ttk.Label(self.root, text="0")
        # bias_min_label.grid(row=0, column=1, sticky="W")
        # bias_max_label = ttk.Label(self.root, text="1")
        # bias_max_label.grid(row=0, column=1, sticky="E")

        # # Creating and placing the min and max labels for stiffness
        # stiffness_min_label = ttk.Label(self.root, text="0")
        # stiffness_min_label.grid(row=1, column=1, sticky="W")
        # stiffness_max_label = ttk.Label(self.root, text="100")
        # stiffness_max_label.grid(row=1, column=1, sticky="E")

        # # Creating and placing the min and max labels for damping
        # damping_min_label = ttk.Label(self.root, text="0")
        # damping_min_label.grid(row=2, column=1, sticky="W")
        # damping_max_label = ttk.Label(self.root, text="20")
        # damping_max_label.grid(row=2, column=1, sticky="E")

        # # Creating and placing the update button
        # update_button = ttk.Button(self.root, text="Update", command=self.update_parameters)
        # update_button.grid(row=3, column=0, columnspan=3, padx=10, pady=10)

    def update_parameters(self):
        self.bias = self.bias_scale.get()
        self.stiffness = self.stiffness_scale.get()
        self.damping = self.damping_scale.get()
        
        # Here, you can perform any actions or call functions that use the updated parameters
        
        print("Bias:", self.bias )
        print("Stiffness:", self.stiffness)
        print("Damping:", self.damping)


    def spring_control(self):
        rospy.loginfo("Initialized!")
        # rospy.loginfo(self.theta)
        rate = rospy.Rate(100) # 10hz
        pub_right = rospy.Publisher('/h3/right_ankle_effort_controller/command', Float64, queue_size=10)
        rospy.Subscriber('/h3/robot_states', State, self.sensor_callback)
        t = 0

        while not rospy.is_shutdown():
            hello_str = "hello world %s" % rospy.get_time()
            # torque = 10*math.sin(0.5*2*math.pi*t/100)
            #if self.theta > -0.4:
            torque = 50*(self.theta+self.knee_theta) # + self.bias+ self.damping*self.theta_dot
            #rospy.loginfo(self.theta)
            ############ minimize torque
            # torque = 5*self.net_torque
            self.torque_cmd = self.torque_cmd*0.5 + self.net_torque*0.5
            #torque = self.torque_cmd*5
            ############
            rospy.loginfo(torque)
            pub_right.publish(torque)
            #self.root.mainloop()
            rate.sleep()
            t = t + 1

        #torque = 0
        pub_right.publish(torque)
        rospy.loginfo(torque)


    def sensor_callback(self, sensor_reading):
        self.theta = sensor_reading.joint_position[2]
        self.knee_theta = sensor_reading.joint_position[1]
        self.theta_dot = sensor_reading.joint_velocity[2]
        self.net_torque = sensor_reading.joint_torque_sensor[2]
        self.motor_torque = sensor_reading.joint_motor_torque[2]
        rospy.loginfo('I heard %s - %s', self.net_torque, self.motor_torque)
        rospy.loginfo('theta ankle %s', self.theta)
        rospy.loginfo('theta knee  %s', self.knee_theta)


if __name__ == '__main__':
    rospy.init_node('ankle_spring', anonymous=True)
    rospy.loginfo("Initialized!")
    sc = spring_controller()
    sc.spring_control()
    


