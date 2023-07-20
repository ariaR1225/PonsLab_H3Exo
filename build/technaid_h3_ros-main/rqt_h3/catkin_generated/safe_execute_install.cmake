execute_process(COMMAND "/home/ponslab/catkin_ws/build/technaid_h3_ros-main/rqt_h3/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/ponslab/catkin_ws/build/technaid_h3_ros-main/rqt_h3/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
