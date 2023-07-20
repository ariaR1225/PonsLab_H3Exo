#!/usr/bin/env python

# license removed for brevity
import rospy
from std_msgs.msg import Float64, Float64MultiArray
import math

def talker():
    pub_right = rospy.Publisher('/h3/right_ankle_position_controller/command', Float64, queue_size=10)

    rospy.init_node('talker', anonymous=True)
    rate = rospy.Rate(100) # 10hz
    t = 0

    while not rospy.is_shutdown():
        hello_str = "hello world %s" % rospy.get_time()
        position = 0.4*math.sin(0.1*2*math.pi*t/100)
        rospy.loginfo(position)
        pub_right.publish(position)
        rate.sleep()
        t = t + 1

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass

