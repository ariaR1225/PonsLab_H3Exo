#!/usr/bin/env python

# license removed for brevity
import rospy
from std_msgs.msg import Float64, Float64MultiArray
import math

def talker():
    pub_left = rospy.Publisher('/h3/left_ankle_effort_controller/command', Float64, queue_size=10)
    
    rospy.init_node('talker', anonymous=True)
    rate = rospy.Rate(100) # 10hz
    t = 0

    while not rospy.is_shutdown():
        hello_str = "hello world %s" % rospy.get_time()
        torque = 10*math.sin(0.5*2*math.pi*t/100)
        rospy.loginfo(torque)
        pub_left.publish(torque)
        rate.sleep()
        t = t + 1

    torque = 0
    pub_left.publish(torque)
    rospy.loginfo(torque)

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass

