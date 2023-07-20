# EXO-H3 on ROS
The exoskeleton H3 (Exo-H3) is a lower limb exoskeleton of six degrees of freedom in the sagittal plane, actuated in the hip, knee, and ankle joints, and Its size can be modified and adapted to different body sizes. The Main Controller (MC) and six Joint Controllers (JC) form a closed-loop control over which a gait algorithm is executed at different speeds and with different levels of assistance. 

This repository has a ROS packages list to do interface with the controllers running in MC. 
- **Position controller** 
- **Stiffness controller** 
- **Torque controller**
- **Task controller**

## Overview
![Ros architecture](https://user-images.githubusercontent.com/73030030/120605797-c6fe9b80-c44e-11eb-97bc-24e969bc6a96.png)


The **h3_hardware_interface** package uses the Hardware Abstraction Layer of [ROS control](http://wiki.ros.org/ros_control) framework to create a bridge between the ROS controllers and the controllers running in MC. The [controller_manager](http://wiki.ros.org/controller_manager) is a tool that manages the controller lifecycle providing the mechanism to load, start, stop, and unload, a ROS controller in runtime.  

## H3 Hardware Interfaces
![ROS Hardware Interface2](https://user-images.githubusercontent.com/73030030/120316006-3d7b8c00-c2dd-11eb-80cc-3848d057e4ef.png)

### ROS hardware interfaces 
- **Joint State Interface**: support reading of joint position, joint speed, and joint motor torque. The measurement units are respectively rad, rad/s, and Nm. 
- **Position Joint Interface**: interface with the internal position controller (command signal in rad). 
- **Effort Joint Interface**: interface with the internal torque controller (command signal in Nm).
 
### H3 Specific hardware interfaces
- **Stiffness Joint Interface**: interface with the internal stiffness controller (command signal [rad, %stiffness]).
- **H3 State Interface**: support reading of signals defined in the h3_msgs/State message.
- **H3 Command Interface**: This is a ROS specific Exo-H3 interface to access all Exo-H3 resource; joint state signals, internal controllers command, and Main Controller parameters. 

## Controllers

### ROS Controllers available 
- **Joint State Controller** 
- **Joint Effort Controller** 
- **Joint Position Controller** 

### H3 Specific Controllers
- **Joint Stiffness Controller**: This controller gets a handle to Stiffness Joint Interface and subscribes to std_msgs/Float64MultiArray message in a ROS topic. 
- **H3 State Controller**: This controller gets a handle to H3 State Interface and publishes **h3_msgs/State** message in a ROS topic. 
- **H3 Task Controller**: This controller gets a handle to the H3 Command interface, receives an h3_msgs/TaskCommand from ROS network, and sends a command to Task Controller running in Exo-H3 MC. 
- **H3 Config Controller**: the configuration controller implements six service servers with the following functions: 
  - Set assistance [h3_msgs/joints] 
  - Set control type [h3_msgs/ControlType] 
  - Set maximum angles [h3_msgs/Joints] 
  - Set minimum angles [h3_msgs/Joints] 
  - Set trigger output [h3_msgs/TriggerOutput] 
  - Set data recording [h3_msgs/DataRecording]
 
The controller plugins available in ROS repositories compliant with Position Joint Interface, Effort Joint Interface, and State Joint Interface can be used with the device after selecting the appropriate control type in the Config Controller ROS interface. Also, you can create your own controller using the existing h3 hardware interface. 

## Dependencies
- PCANBasic library and [Peak CAN Driver](https://www.peak-system.com/fileadmin/media/linux/index.htm) (character-based driver) is requered.
- [ros_control](http://wiki.ros.org/ros_control)
