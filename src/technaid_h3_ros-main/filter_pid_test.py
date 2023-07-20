#! /usr/bin/env python

import rospy
from h3_msgs.msg import State
from std_msgs.msg import Float64
import numpy as np
import tkinter as tk
from tkinter import ttk

class filter_controller:
    def __init__(self):
        self.joint_torque_ls = [0,0,0]
        self.motor_torque_ls = [0,0,0]
        self.cmd = 0
        self.data_maf = 0
        self.motor_torque = 0
        self.joint_torque = 0

        self.joint = "ankle"
        self.idx = -1
        self.alpha = 1
        self.MAF_enabled = False
        self.window_size = 10
        self.PID_enabled = False
        self.kp = 0
        self.ki = 0
        self.kd = 0

        self.ref = 0
        self.eint = 0
        self.prev = 0
        self.anti_windup_max = 0
        self.anti_windup_min = 0

        self.chirp = 0
        self.status = False
        self.chirp_arr = []
        self.unfiltered_ls = []
        self.filtered_ls = []
        self.output_ls = []

        self.t = 0

        # GUI init
        self.root = tk.Tk()
        self.root.title("Exo H3 Settings")

        # Update
        def setting_update():
            self.joint = self.joint_combobox.get()
            self.MAF_enabled = self.maf_var.get()
            self.window_size = int(float(self.win_scale.get()))
            self.PID_enabled = self.pid_var.get()
            if self.PID_enabled:
                self.kp = float(self.kp_entry.get())
                self.ki = float(self.ki_entry.get())
                self.kd = float(self.kd_entry.get())
            if self.al_entry.get() == '':
                pass
            else:
                self.alpha = float(self.al_entry.get())
            print("--------------------------------")

            print(self.joint)
            if self.joint == "ankle":
                self.idx = -1
            if self.joint == "knee":
                self.idx = -2

            if self.MAF_enabled:
                print(f"MAF: window of size {self.window_size}")
            else:
                print("MAF disabled")
            if self.PID_enabled:
                print(f"PID: kp = {self.kp}, ki = {self.ki}, kd = {self.kd}" )
            else:
                print("PID disabled")
        
        # Record
        def setting_record():
            self.status = True
        
        # Label
        joint_label = ttk.Label(self.root,text="Joint")
        joint_label.grid(row=0,column=0,padx=10,pady=5)
        rec_label = ttk.Label(self.root,text="Alpha")
        rec_label.grid(row=1,column=0,padx=10,pady=5)
        maf_label = ttk.Label(self.root,text="Moving AVG")
        maf_label.grid(row=2,column=0,padx=10,pady=5)
        win_label = ttk.Label(self.root,text="Window Size")
        win_label.grid(row=3,column=0,padx=10,pady=5)
        pid_label = ttk.Label(self.root,text="PID")
        pid_label.grid(row=4,column=0,padx=10,pady=5)
        kp_label = ttk.Label(self.root,text="Kp")
        kp_label.grid(row=5,column=0,padx=10,pady=5)
        ki_label = ttk.Label(self.root,text="Ki")
        ki_label.grid(row=6,column=0,padx=10,pady=5)
        kd_label = ttk.Label(self.root,text="Kd")
        kd_label.grid(row=7,column=0,padx=10,pady=5)

        # Value
        win_var = tk.IntVar()
        win_val = ttk.Label(self.root,textvariable=win_var)
        win_val.grid(row=3,column=2,padx=10,pady=5)
        self.maf_var = tk.BooleanVar()
        self.pid_var = tk.BooleanVar()
        kp_var = tk.DoubleVar()
        ki_var = tk.DoubleVar()
        kd_var = tk.DoubleVar()
        al_var = tk.DoubleVar()

        # Dropdown
        self.joint_combobox = ttk.Combobox(self.root,values=["ankle","knee"])
        self.joint_combobox.grid(row=0,column=1,padx=10,pady=5)
        self.joint_combobox.current(0)

        # Scale 
        self.win_scale = ttk.Scale(self.root,from_=1,to=30,length=200,orient=tk.HORIZONTAL,value=10,command=lambda x:win_var.set(int(float(x))))
        self.win_scale.grid(row=3,column=1,padx=10,pady=5)
        self.win_scale.set(10)

        # Checkbox
        self.maf_check = ttk.Checkbutton(self.root,text="Enabled",variable=self.maf_var,onvalue=True,offvalue=False)
        self.maf_check.grid(row=2,column=1,padx=10,pady=5)
        self.pid_check = ttk.Checkbutton(self.root,text="Enabled",variable=self.pid_var,onvalue=True,offvalue=False)
        self.pid_check.grid(row=4,column=1,padx=10,pady=5)

        # Entry
        self.al_entry = ttk.Entry(self.root,textvariable=al_var)
        self.al_entry.grid(row=1,column=1,padx=10,pady=5)
        self.kp_entry = ttk.Entry(self.root,textvariable=kp_var)
        self.kp_entry.grid(row=5,column=1,padx=10,pady=5)
        self.ki_entry = ttk.Entry(self.root,textvariable=ki_var)
        self.ki_entry.grid(row=6,column=1,padx=10,pady=5)
        self.kd_entry = ttk.Entry(self.root,textvariable=kd_var)
        self.kd_entry.grid(row=7,column=1,padx=10,pady=5)

        # Button
        self.update_button = ttk.Button(self.root,text="Update",command=setting_update)
        self.update_button.grid(row=8,column=1,padx=10,pady=10)
        self.record_button = ttk.Button(self.root,text="Record",command=setting_record)
        self.record_button.grid(row=9,column=1,padx=10,pady=5)


    def filter_control(self):
        rospy.loginfo("Controller start!")
        rate = rospy.Rate(100)
        pub_ankle_left = rospy.Publisher('/h3/left_ankle_effort_controller/command', Float64, queue_size=10)
        pub_ankle_joint = rospy.Publisher('ankle_joint_torque',Float64,queue_size=10)
        pub_ankle_motor = rospy.Publisher('ankle_motor_torque',Float64,queue_size=10)
        pub_pos_ref = rospy.Publisher('pos_ref',Float64,queue_size=10)
        pub_filter = rospy.Publisher('filtered',Float64,queue_size=10)

        pub_knee_left = rospy.Publisher('/h3/left_knee_effort_controller/command', Float64, queue_size=10)
        pub_knee_joint = rospy.Publisher('knee_joint_torque',Float64,queue_size=10)
        pub_knee_motor = rospy.Publisher('knee_motor_torque',Float64,queue_size=10)
        rospy.Subscriber('/h3/robot_states',State,self.sensor_callback)
        buffer = list(np.zeros(self.window_size))
        self.t = 0
        d = {"unfiltered":0,"filtered":0,"output":0}
        while not rospy.is_shutdown():
            # Get sensor readings
            self.motor_torque = self.motor_torque_ls[self.idx]
            self.joint_torque = self.joint_torque_ls[self.idx]

            # Prepare buffer for filter
            buffer.append(self.joint_torque)
            if len(buffer) > self.window_size:
                buffer = buffer[len(buffer) - self.window_size:]

            # Generate chirp signal
            amp = 5
            start_f = .05
            end_f = 0.2
            duration = 200
            self.chirp = amp*np.sin(np.pi/duration*((end_f - start_f)*self.t**2/duration + start_f))
            
            # Moving Avg Filter
            if self.MAF_enabled:
                self.data_maf = sum(buffer)/self.window_size
                self.cmd = (1 - self.alpha)*self.cmd + self.alpha*self.data_maf
                if self.PID_enabled:
                    error = self.data_maf
                    self.cmd = self.kp*error + self.ki*self.eint + self.kd*(error - self.prev)
                    self.eint += error
                    self.prev = error
                    if self.eint > self.anti_windup_max:
                        self.eint = self.anti_windup_max
                    if self.eint < self.anti_windup_min:
                        self.eint = self.anti_windup_min
            else:
                self.cmd = (1 - self.alpha)*self.cmd + self.alpha*self.joint_torque
            
            if self.joint == "ankle":
                if self.status:
                    pub_pos_ref.publish(self.chirp)
                    self.unfiltered_ls.append(self.joint_torque)
                    self.filtered_ls.append(self.data_maf)
                    self.output_ls.append(self.cmd)
                    self.t += 1

                    if self.t > 2000:
                        d["unfiltered"] = self.unfiltered_ls
                        d["filtered"] = self.filtered_ls
                        d["output"] = self.output_ls
                        rospy.loginfo(d)
                        self.status = False
                        self.t = 0


                pub_ankle_joint.publish(self.joint_torque)
                pub_filter.publish(self.data_maf)
                #pub_ankle_motor.publish(self.motor_torque)
                pub_ankle_left.publish(-5*self.cmd)

                #rospy.loginfo(f"input: {self.joint_torque}\noutput: {self.cmd}")

            elif self.joint == "knee":
                pub_knee_joint.publish(self.joint_torque)
                #pub_knee_motor.publish(self.motor_torque)
                pub_knee_left.publish(self.cmd)
                rospy.loginfo(f"input: {self.joint_torque}\noutput: {self.cmd}")

            self.root.update()
            rate.sleep()

    def sensor_callback(self,sensor_reading):
        self.joint_torque_ls = sensor_reading.joint_torque_sensor
        self.motor_torque_ls = sensor_reading.joint_motor_torque

if __name__ == "__main__":
    rospy.init_node("ankle_spring",anonymous=True)
    rospy.loginfo("Console start!")
    fc = filter_controller()
    fc.filter_control()
