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

#include "rqt_h3/rqt_h3.h"
#include <pluginlib/class_list_macros.h>
#include <QStringList>

namespace rqt_h3
{
  RQTH3::RQTH3() : rqt_gui_cpp::Plugin(), widget_(0)
  {
    setObjectName("RQTH3");
  }

  void RQTH3::initPlugin(qt_gui_cpp::PluginContext &context)
  {
    // access standalone command line arguments
    QStringList argv = context.argv();
    // create QWidget
    widget_ = new QWidget();
    // extend the widget with all attributes and children from UI file
    ui_.setupUi(widget_);
    // add widget to the user interface
    context.addWidget(widget_);

    // connect signal and slot
    connect(ui_.standUpButton, SIGNAL(pressed()), this, SLOT(slotStandUpButton()));
    connect(ui_.sitDownButton, SIGNAL(pressed()), this, SLOT(slotSitDownButton()));
    connect(ui_.stopButton, SIGNAL(pressed()), this, SLOT(slotStopButton()));
    connect(ui_.passiveButton, SIGNAL(pressed()), this, SLOT(slotPassiveButton()));
    connect(ui_.arrowUpButton, SIGNAL(pressed()), this, SLOT(slotwalkUpButton()));
    connect(ui_.arrowDownButton, SIGNAL(pressed()), this, SLOT(slotwalkDownButton()));
    connect(ui_.walkButton, SIGNAL(pressed()), this, SLOT(slotwalkButton()));
    connect(ui_.rightStepButton, SIGNAL(pressed()), this, SLOT(slotRightStepButton()));
    connect(ui_.leftStepButton, SIGNAL(pressed()), this, SLOT(slotLeftStepButton()));
    connect(ui_.refreshIconButton, SIGNAL(pressed()), this, SLOT(slotRefreshButton()));
    //--
    connect(ui_.rightSlider, SIGNAL(valueChanged(int)), this, SLOT(slotRightSlider(int)));
    connect(ui_.leftSlider, SIGNAL(valueChanged(int)), this, SLOT(slotLeftSlider(int)));
    //--
    connect(ui_.commandAPPButton, SIGNAL(pressed()), this, SLOT(slotCommandAppButton()));
    connect(ui_.selectRobotNsButton, SIGNAL(pressed()), this, SLOT(slotSelectRobotNsButton()));
    //--
    connect(timer, SIGNAL(timeout()), this, SLOT(slotTimerLoop()));

    /**
   * GUI initial conditions
   */
    robot_ns_ant_ = " ";
    updateRobotNs();
    ui_.connectionLabel->setVisible(false);
  }

  void RQTH3::slotTimerLoop()
  {
    mutex_.lock();
    h3_msgs::TaskCommand cmd = rTask_;
    mutex_.unlock();
    if (publish_task_command_)
      pub_.publish(cmd);
    updateGUI();
  }
  /**
 * @brief
 *
 */
  void RQTH3::updateRobotNs()
  {
    ui_.robotNsComboBox->clear();
    robot_ns2_.clear();

    XmlRpc::XmlRpcValue req = ros::this_node::getName();
    XmlRpc::XmlRpcValue res;
    XmlRpc::XmlRpcValue pay;
    ros::master::execute("getSystemState", req, res, pay, true);
    std::string mystr;
    XmlRpc::XmlRpcValue my_type_string(&mystr);
    int cnt = 0;
    for (int i = 0; i < res[2][2].size(); i++)
    {
      my_type_string = res[2][2][i][0];
      std::string my_value = my_type_string;
      // ROS_INFO("XML service value  %s", res[2][2][i][0].toXml().c_str());
      // filter only namaspace that conatains controller_manager services
      int j = 0;
      if (my_value.find("controller_manager") != std::string::npos)
      {
        for (int k = 0; k < my_value.length(); k++)
        {
          if (my_value.operator[](k) == '/')
          {
            j = k;
          }
        }
        robot_ns_ = my_value.substr(0, j - 19);
        robot_ns2_[robot_ns_] = 1;
      }
      // ROS_INFO("XML service value  %s", my_value.c_str());
    } //
    std::map<std::string, int>::iterator it;
    for (it = robot_ns2_.begin(); it != robot_ns2_.end(); ++it)
    {
      ui_.robotNsComboBox->addItem(QString::fromStdString(it->first));
    }
  }

  /**
 *
 */
  void RQTH3::robotState(const h3_msgs::State::ConstPtr &sensor_state)
  {
    std::unique_lock<std::mutex> lock(mutex_);
    state_ = *sensor_state;
    lock.unlock();
  }

  /**
 * @brief
 *
 */
  void RQTH3::slotSelectRobotNsButton()
  {
    timer->stop();
    sub_.shutdown();
    pub_.shutdown();
    srvc_.shutdown();
    publish_task_command_ = false;

    robot_ns_ = ui_.robotNsComboBox->currentText().toStdString();
    srvc_ = nh_.serviceClient<controller_manager_msgs::ListControllers>(robot_ns_ + "/controller_manager/list_controllers");

    controller_manager_msgs::ListControllers cm_list_controller;
    if (srvc_.call(cm_list_controller))
    {
      for (int i = 0; i < cm_list_controller.response.controller.size(); ++i)
      {
        if (cm_list_controller.response.controller[i].type == "h3_robot_state_controller/H3RobotStateController")
        {
          sub_ = nh_.subscribe(robot_ns_ + "/robot_states", 1, &RQTH3::robotState, this);
        }
        if (cm_list_controller.response.controller[i].type == "h3_task_controller/H3TaskController")
        {
          pub_ = nh_.advertise<h3_msgs::TaskCommand>(cm_list_controller.response.controller[i].name + "/command", 1);
          publish_task_command_ = true;
        }
      }
    }

    //Start timer loop
    timer->start(10);
  }

  void RQTH3::slotRefreshButton()
  {
    updateRobotNs();
  }

  void RQTH3::slotStandUpButton()
  {
    taskControllerPublish(rTask_.STAND_UP);
  }

  void RQTH3::slotSitDownButton()
  {
    taskControllerPublish(rTask_.SIT_DOWN);
  }

  void RQTH3::slotStopButton()
  {
    taskControllerPublish(rTask_.STOP_GAIT);
  }

  void RQTH3::slotPassiveButton()
  {
    exo_passive_ ^= 1;
    if (exo_passive_)
    {
      taskControllerPublish(rTask_.JOINTS_COMPLIANT);
    }
    else
    {
      taskControllerPublish(rTask_.JOINTS_PASSIVE);
    }
  }

  void RQTH3::slotwalkButton()
  {
    taskControllerPublish(exo_walk_speed_);
  }
  
  void RQTH3::slotwalkUpButton()
  {
    exo_walk_speed_++;
    if (exo_walk_speed_ > 10)
    {
      exo_walk_speed_ = 10;
    }
    ui_.speedLabel->setText(QString::number(exo_walk_speed_));

    h3_msgs::State state = readState();
    if (state.status >= rTask_.WALK_SPEED_1 && state.status <= rTask_.WALK_SPEED_10)
    {
      taskControllerPublish(exo_walk_speed_);
    }
  }

  void RQTH3::slotwalkDownButton()
  {
    exo_walk_speed_ --;
    if (exo_walk_speed_ < 1)
    {
      exo_walk_speed_ = 1;
    }
    ui_.speedLabel->setText(QString::number(exo_walk_speed_));
    
    h3_msgs::State state = readState();
    if (state.status >= rTask_.WALK_SPEED_1 && state.status <= rTask_.WALK_SPEED_10)
    {
      taskControllerPublish(exo_walk_speed_);
    }
  }

  void RQTH3::slotRightSlider(int value)
  {
    ui_.rightSliderLabel->setText(QString::number(value * 10));
    taskControllerPublish(30 + value);
  }

  void RQTH3::slotLeftSlider(int value)
  {
    ui_.leftSliderLabel->setText(QString::number(value * 10));
    taskControllerPublish(40 + value);
  }

  void RQTH3::slotRightStepButton()
  {
    taskControllerPublish(rTask_.PERFORM_RIGHT_STEP);
  }

  void RQTH3::slotLeftStepButton()
  {
    taskControllerPublish(rTask_.PERFORM_LEFT_STEP);
  }

  void RQTH3::slotCommandAppButton()
  {
    command_app_aux_ ^= 1;
    if (command_app_aux_)
    {
      taskControllerPublish(rTask_.REGAIN_COMMAND);
    }
    else
    {
      taskControllerPublish(rTask_.GIVE_COMMAND);
    }
  }

  void RQTH3::taskControllerPublish(unsigned char cmd)
  {
    mutex_.lock();
    rTask_.command = cmd;
    mutex_.unlock();
  }
  
  h3_msgs::State RQTH3::readState()
  {
    h3_msgs::State state;
    mutex_.lock();
    state = state_;
    mutex_.unlock();
    return state;
  }

  void RQTH3::updateGUI()
  {
    h3_msgs::State sensor_state = readState();

    ui_.runtimeLabel->setText(QString::number(sensor_state.runtime_min / 60) + QString::fromStdString(":") + QString::number((sensor_state.runtime_min % 60)) + QString::fromStdString(":") +
                              QString::number(sensor_state.runtime_sec) + QString::fromStdString(":") +
                              QString::number(sensor_state.runtime_csec));

    ui_.batteryIndicatorLabel->setText(QString::number(sensor_state.battery_voltage));
    if (sensor_state.connection_status == 1)
    {
      ui_.connectionLabel->setText("Connected");
      ui_.connectionLabel->setVisible(true);
    }
    else
    {
      ui_.connectionLabel->setText("Disconnected");
      ui_.connectionLabel->setVisible(true);
    }
    switch ((int)sensor_state.status)
    {
    case 0:
      ui_.taskStatusLabel->setText("Standing up");
      break;
    case 11:
      ui_.taskStatusLabel->setText("Passive");
      ui_.passiveButton->setText("COMPLIANT");
      break;
    case 12:
      ui_.taskStatusLabel->setText("Compliant");
      ui_.passiveButton->setText("PASSIVE");
      break;
    case 13:
      ui_.taskStatusLabel->setText("Stopping");
      break;
    case 14:
      ui_.taskStatusLabel->setText("Performing stand up");
      break;
    case 15:
      ui_.taskStatusLabel->setText("Performing sit down");
      break;
    case 16:
      ui_.taskStatusLabel->setText("Seated down");
      break;
    case 17:
      ui_.taskStatusLabel->setText("Performing left step");
      break;
    case 18:
      ui_.taskStatusLabel->setText("Performing right step");
      break;
    case 19:
      ui_.taskStatusLabel->setText("Blocked");
      break;
    default:
      if (sensor_state.status >= 1 && sensor_state.status <= 10)
      {
        ui_.taskStatusLabel->setText("Speed " + QString::number(sensor_state.status));
      }
      if (sensor_state.status >= 21 && sensor_state.status <= 26)
      {
        ui_.taskStatusLabel->setText("Failure joint " + QString::number(sensor_state.status - 20));
      }
      break;
    }
    if (sensor_state.command_app == 1)
    {
      ui_.commandAPPButton->setText("BL->CAN");
    }
    else
    {
      ui_.commandAPPButton->setText("CAN->BL");
    }
  }

  void RQTH3::shutdownPlugin()
  {
    // unregister all publishers)
    timer->stop();
    while (timer->isActive())
      ;
    sub_.shutdown();
    pub_.shutdown();
    nh_.shutdown();
  }

  void RQTH3::saveSettings(qt_gui_cpp::Settings &plugin_settings, qt_gui_cpp::Settings &instance_settings) const
  {
  }

  void RQTH3::restoreSettings(const qt_gui_cpp::Settings &plugin_settings, const qt_gui_cpp::Settings &instance_settings)
  {
  }

} // namespace rqt_h3
PLUGINLIB_EXPORT_CLASS(rqt_h3::RQTH3, rqt_gui_cpp::Plugin)
