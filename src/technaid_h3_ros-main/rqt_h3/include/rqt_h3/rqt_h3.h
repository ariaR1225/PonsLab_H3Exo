///////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2021, Technaid S.L.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//   * Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//   * Redistributions in binary form must reproduce the above copyright
//     notice, this list of conditions and the following disclaimer in the
//     documentation and/or other materials provided with the distribution.
//   * Neither the name of Technaid S.L. nor the names of its
//     contributors may be used to endorse or promote products derived from
//     this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//////////////////////////////////////////////////////////////////////////////

#ifndef RQT_H3_RQT_H3_H
#define RQT_H3_RQT_H3_H

#include <h3_msgs/TaskCommand.h>
#include <h3_msgs/State.h>
#include <controller_manager_msgs/ListControllers.h>

#include <map>
#include <mutex>

#include <rqt_gui_cpp/plugin.h>
#include <rqt_h3/ui_h3_command.h>
#include <QWidget>
#include <QTimer>
#include <ros/ros.h>

namespace rqt_h3
{
  class RQTH3 : public rqt_gui_cpp::Plugin
  {
    Q_OBJECT
  public:
    RQTH3();
    virtual void initPlugin(qt_gui_cpp::PluginContext &context);
    virtual void shutdownPlugin();
    virtual void saveSettings(qt_gui_cpp::Settings &plugin_settings, qt_gui_cpp::Settings &instance_settings) const;
    virtual void restoreSettings(const qt_gui_cpp::Settings &plugin_settings,
                                 const qt_gui_cpp::Settings &instance_settings);

  private:
    std::string robot_ns_;
    std::map<std::string, int> robot_ns2_;
    std::string robot_ns_ant_;
    Ui::H3Form ui_;
    QWidget *widget_;

    ros::NodeHandle nh_;
    ros::ServiceClient srvc_; // controller_manager

    ros::Subscriber sub_; // h3_robot_state
    ros::Publisher pub_;  // h3_Task_Controller_Command
    bool publish_task_command_ = false;

    h3_msgs::TaskCommand rTask_;
    h3_msgs::State state_;

    bool exo_passive_ = false;
    bool command_app_aux_ = false;
    char exo_walk_speed_ = 1;
    std::mutex mutex_;

    void taskControllerPublish(unsigned char cmd);
    void updateGUI();
    void robotState(const h3_msgs::State::ConstPtr &sensor_state);
    h3_msgs::State readState();

    void updateRobotNs(void);
    QTimer *timer = new QTimer(this);

  public Q_SLOTS:
    void slotStandUpButton();
    void slotSitDownButton();
    void slotStopButton();
    void slotPassiveButton();
    void slotwalkUpButton();
    void slotwalkDownButton();
    void slotwalkButton();
    void slotRightSlider(int);
    void slotLeftSlider(int);
    void slotRightStepButton();
    void slotLeftStepButton();
    void slotRefreshButton();
    //---
    void slotRobotNsComboBoxIC(int);
    void slotCmComboBoxIC();
    void slotSelectRobotNsButton();

    //--
    void slotCommandAppButton();
    //--Timer loop
    void slotTimerLoop();

  }; // class

} // namespace rqt_h3

#endif