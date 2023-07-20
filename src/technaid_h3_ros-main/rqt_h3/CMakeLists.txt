cmake_minimum_required(VERSION 3.0.2)
project(rqt_h3)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  controller_manager_msgs
  h3_msgs
  rosbag
  roscpp
  roslint
  rqt_gui
  rqt_gui_cpp
  std_msgs
)

if("${qt_gui_cpp_USE_QT_MAJOR_VERSION} " STREQUAL "5 ")
  find_package(Qt5Widgets REQUIRED)
else()
  find_package(Qt4 COMPONENTS QtCore QtGui REQUIRED)
  include(${QT_USE_FILE})
endif()

catkin_python_setup()

catkin_package(
  LIBRARIES rqt_h3
  CATKIN_DEPENDS controller_manager_msgs h3_msgs rosbag roscpp roslint rqt_gui rqt_gui_cpp std_msgs
)

set (rqt_h3_SRCS
  src/rqt_h3/rqt_h3.cpp
)

set(rqt_h3_HDRS
  include/rqt_h3/rqt_h3.h
)

set(rqt_h3_UIS
  resource/h3_command.ui
)

set(rqt_h3_QRC
  resource/resource.qrc
)

if("${qt_gui_cpp_USE_QT_MAJOR_VERSION} " STREQUAL "5 ")
  qt5_wrap_cpp(rqt_h3_MOCS ${rqt_h3_HDRS})
  qt5_wrap_ui(rqt_h3_UIS_H ${rqt_h3_UIS})
  qt5_add_resources(rqt_h3_RCC ${rqt_h3_QRC})
else()
  qt4_wrap_cpp(rqt_h3_MOCS ${rqt_h3_HDRS})
  qt4_wrap_ui(rqt_h3_UIS_H ${rqt_h3_UIS})
  qt4_add_resources(rqt_h3_RCC ${rqt_h3_QRC})
endif()

include_directories(
 include
  ${CMAKE_CURRENT_BINARY_DIR}/..
  ${catkin_INCLUDE_DIRS}
)

add_library(${PROJECT_NAME}
    ${rqt_h3_SRCS}
    ${rqt_h3_MOCS}
    ${rqt_h3_UIS_H}
    ${rqt_h3_RCC}
    )

if("${qt_gui_cpp_USE_QT_MAJOR_VERSION} " STREQUAL "5 ")
  target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
else()
  target_link_libraries(${PROJECT_NAME} ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})
endif()

install(PROGRAMS scripts/rqt_h3.py
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

install(DIRECTORY
  resource
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)

install(FILES
  plugin.xml
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)
