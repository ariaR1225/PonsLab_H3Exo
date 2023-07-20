# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "control_msgs;control_toolbox;controller_interface;controller_manager;controller_manager_msgs;roscpp;std_msgs;hardware_interface".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lh3_hardware_interface".split(';') if "-lh3_hardware_interface" != "" else []
PROJECT_NAME = "h3_hardware_interface"
PROJECT_SPACE_DIR = "/home/ponslab/catkin_ws/install"
PROJECT_VERSION = "1.0.0"
