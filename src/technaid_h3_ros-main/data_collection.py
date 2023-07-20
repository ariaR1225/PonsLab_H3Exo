#! /usr/bin/env python

import rospy
from h3_msgs.msg import State
from std_msgs.msg import Float64, Float64MultiArray
import math

class tr_controller:
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

        self.ankle_ls = []
        self.knee_ls = []

        self.ratio = .9
        self.mode = "knee"

    def tr_control(self):
        rospy.loginfo("Controller start!")
        rate = rospy.Rate(100) # 10 Hz
        pub_ankle = rospy.Publisher('/h3/left_ankle_effort_controller/command',Float64,queue_size=10)
        pub_knee = rospy.Publisher('/h3/left_knee_effort_controller/command',Float64,queue_size=10)
        rospy.Subscriber('/h3/robot_states',State,self.callback)
        start = rospy.get_time()
    
        while not rospy.is_shutdown():
            if self.mode == "ankle":
                self.ankle_torque_cmd = self.ankle_torque_cmd*(1 - self.ratio) + self.ankle_net_torque*self.ratio
                pub_ankle.publish(-5*self.ankle_torque_cmd)
                self.ankle_ls.append(self.ankle_net_torque)
                end = rospy.get_time()
                sr = len(self.ankle_ls)/(end - start) # sampling rate
                rospy.loginfo(self.ankle_ls)
                
            elif self.mode == "knee":
                self.knee_torque_cmd = self.knee_torque_cmd*(1 - self.ratio) + self.knee_net_torque*self.ratio
                pub_knee.publish(-5*self.knee_torque_cmd)
                self.knee_ls.append(self.knee_net_torque)
                end = rospy.get_time()
                sr = len(self.knee_ls)/(end - start) # sampling rate
                rospy.loginfo(self.knee_ls)
            
            rospy.loginfo(sr)
            rate.sleep()
            
    def callback(self,r):
        self.ankle_net_torque = r.joint_torque_sensor[-1]
        self.knee_net_torque = r.joint_torque_sensor[-2]
         
if __name__ == '__main__':
    rospy.init_node('ankle_spring', anonymous=True)
    rospy.loginfo("Console start!")
    tc = tr_controller()
    tc.tr_control()