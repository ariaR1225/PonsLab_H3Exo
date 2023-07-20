/********************************************************************************
** Form generated from reading UI file 'h3_command.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_H3_COMMAND_H
#define UI_H3_COMMAND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_H3Form
{
public:
    QLabel *batteryLabel_2;
    QLabel *batteryLabel_3;
    QLabel *batteryLabel;
    QComboBox *robotNsComboBox;
    QLabel *batteryLabel_8;
    QLabel *runtimeLabel;
    QPushButton *refreshIconButton;
    QPushButton *seatedImageButton;
    QLabel *label_2;
    QPushButton *arrowUpButton;
    QSlider *rightSlider;
    QLabel *taskStatusLabel;
    QPushButton *sitDownButton;
    QPushButton *stopButton;
    QPushButton *rightStepButton;
    QPushButton *standUpButton;
    QPushButton *leftStepButton;
    QSlider *leftSlider;
    QLabel *leftStepLabel;
    QLabel *batteryLabel_9;
    QLabel *assistancelabel;
    QPushButton *passiveButton;
    QLabel *rightSteplabel;
    QFrame *line;
    QPushButton *walkButton;
    QPushButton *arrowDownButton;
    QFrame *frame;
    QLabel *rightSliderLabel;
    QLabel *label;
    QLabel *leftSliderLabel;
    QLabel *speedLabel;
    QFrame *frame_2;
    QPushButton *selectRobotNsButton;
    QLabel *batteryIndicatorLabel;
    QLabel *batteryIndicatorLabel_2;
    QPushButton *commandAPPButton;
    QLabel *connectionLabel;
    QSplitter *splitter;

    void setupUi(QWidget *H3Form)
    {
        if (H3Form->objectName().isEmpty())
            H3Form->setObjectName(QString::fromUtf8("H3Form"));
        H3Form->resize(467, 597);
        batteryLabel_2 = new QLabel(H3Form);
        batteryLabel_2->setObjectName(QString::fromUtf8("batteryLabel_2"));
        batteryLabel_2->setGeometry(QRect(20, 20, 61, 17));
        batteryLabel_3 = new QLabel(H3Form);
        batteryLabel_3->setObjectName(QString::fromUtf8("batteryLabel_3"));
        batteryLabel_3->setGeometry(QRect(20, 50, 131, 17));
        batteryLabel = new QLabel(H3Form);
        batteryLabel->setObjectName(QString::fromUtf8("batteryLabel"));
        batteryLabel->setGeometry(QRect(280, 80, 61, 17));
        robotNsComboBox = new QComboBox(H3Form);
        robotNsComboBox->setObjectName(QString::fromUtf8("robotNsComboBox"));
        robotNsComboBox->setGeometry(QRect(90, 20, 151, 21));
        batteryLabel_8 = new QLabel(H3Form);
        batteryLabel_8->setObjectName(QString::fromUtf8("batteryLabel_8"));
        batteryLabel_8->setGeometry(QRect(20, 80, 121, 17));
        runtimeLabel = new QLabel(H3Form);
        runtimeLabel->setObjectName(QString::fromUtf8("runtimeLabel"));
        runtimeLabel->setGeometry(QRect(140, 80, 101, 17));
        refreshIconButton = new QPushButton(H3Form);
        refreshIconButton->setObjectName(QString::fromUtf8("refreshIconButton"));
        refreshIconButton->setGeometry(QRect(240, 20, 21, 21));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/resource/refresh.png"), QSize(), QIcon::Normal, QIcon::On);
        refreshIconButton->setIcon(icon);
        refreshIconButton->setIconSize(QSize(20, 20));
        seatedImageButton = new QPushButton(H3Form);
        seatedImageButton->setObjectName(QString::fromUtf8("seatedImageButton"));
        seatedImageButton->setGeometry(QRect(50, 150, 121, 121));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(seatedImageButton->sizePolicy().hasHeightForWidth());
        seatedImageButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resource/sit_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/resource/sit_down.png"), QSize(), QIcon::Normal, QIcon::On);
        seatedImageButton->setIcon(icon1);
        seatedImageButton->setIconSize(QSize(121, 121));
        seatedImageButton->setCheckable(false);
        label_2 = new QLabel(H3Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(390, 380, 21, 17));
        arrowUpButton = new QPushButton(H3Form);
        arrowUpButton->setObjectName(QString::fromUtf8("arrowUpButton"));
        arrowUpButton->setGeometry(QRect(340, 130, 31, 51));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resource/arrow_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/resource/arrow_up.png"), QSize(), QIcon::Normal, QIcon::On);
        arrowUpButton->setIcon(icon2);
        arrowUpButton->setIconSize(QSize(31, 51));
        rightSlider = new QSlider(H3Form);
        rightSlider->setObjectName(QString::fromUtf8("rightSlider"));
        rightSlider->setGeometry(QRect(50, 395, 121, 31));
        rightSlider->setMinimum(1);
        rightSlider->setMaximum(10);
        rightSlider->setSingleStep(1);
        rightSlider->setPageStep(1);
        rightSlider->setValue(10);
        rightSlider->setTracking(true);
        rightSlider->setOrientation(Qt::Horizontal);
        taskStatusLabel = new QLabel(H3Form);
        taskStatusLabel->setObjectName(QString::fromUtf8("taskStatusLabel"));
        taskStatusLabel->setGeometry(QRect(100, 110, 341, 20));
        QFont font;
        font.setPointSize(12);
        taskStatusLabel->setFont(font);
        sitDownButton = new QPushButton(H3Form);
        sitDownButton->setObjectName(QString::fromUtf8("sitDownButton"));
        sitDownButton->setGeometry(QRect(30, 310, 81, 41));
        stopButton = new QPushButton(H3Form);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(230, 310, 81, 41));
        rightStepButton = new QPushButton(H3Form);
        rightStepButton->setObjectName(QString::fromUtf8("rightStepButton"));
        rightStepButton->setGeometry(QRect(50, 430, 121, 121));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resource/right_step.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/resource/right_step.png"), QSize(), QIcon::Normal, QIcon::On);
        rightStepButton->setIcon(icon3);
        rightStepButton->setIconSize(QSize(121, 121));
        standUpButton = new QPushButton(H3Form);
        standUpButton->setObjectName(QString::fromUtf8("standUpButton"));
        standUpButton->setGeometry(QRect(130, 310, 81, 41));
        leftStepButton = new QPushButton(H3Form);
        leftStepButton->setObjectName(QString::fromUtf8("leftStepButton"));
        leftStepButton->setGeometry(QRect(290, 430, 121, 121));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resource/left_step.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/resource/left_step.png"), QSize(), QIcon::Normal, QIcon::On);
        leftStepButton->setIcon(icon4);
        leftStepButton->setIconSize(QSize(121, 121));
        leftSlider = new QSlider(H3Form);
        leftSlider->setObjectName(QString::fromUtf8("leftSlider"));
        leftSlider->setGeometry(QRect(290, 395, 121, 31));
        leftSlider->setMinimum(1);
        leftSlider->setMaximum(10);
        leftSlider->setSingleStep(1);
        leftSlider->setPageStep(1);
        leftSlider->setValue(10);
        leftSlider->setOrientation(Qt::Horizontal);
        leftStepLabel = new QLabel(H3Form);
        leftStepLabel->setObjectName(QString::fromUtf8("leftStepLabel"));
        leftStepLabel->setGeometry(QRect(320, 560, 81, 17));
        batteryLabel_9 = new QLabel(H3Form);
        batteryLabel_9->setObjectName(QString::fromUtf8("batteryLabel_9"));
        batteryLabel_9->setGeometry(QRect(20, 110, 81, 17));
        assistancelabel = new QLabel(H3Form);
        assistancelabel->setObjectName(QString::fromUtf8("assistancelabel"));
        assistancelabel->setGeometry(QRect(140, 360, 171, 17));
        passiveButton = new QPushButton(H3Form);
        passiveButton->setObjectName(QString::fromUtf8("passiveButton"));
        passiveButton->setGeometry(QRect(330, 310, 101, 41));
        rightSteplabel = new QLabel(H3Form);
        rightSteplabel->setObjectName(QString::fromUtf8("rightSteplabel"));
        rightSteplabel->setGeometry(QRect(60, 560, 81, 17));
        rightSteplabel->setTextInteractionFlags(Qt::TextBrowserInteraction);
        line = new QFrame(H3Form);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(210, 140, 20, 151));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        walkButton = new QPushButton(H3Form);
        walkButton->setObjectName(QString::fromUtf8("walkButton"));
        walkButton->setGeometry(QRect(310, 190, 81, 41));
        arrowDownButton = new QPushButton(H3Form);
        arrowDownButton->setObjectName(QString::fromUtf8("arrowDownButton"));
        arrowDownButton->setGeometry(QRect(340, 240, 31, 51));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resource/arrow_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8(":/resource/arrow_down.png"), QSize(), QIcon::Normal, QIcon::On);
        arrowDownButton->setIcon(icon5);
        arrowDownButton->setIconSize(QSize(31, 51));
        frame = new QFrame(H3Form);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 100, 441, 491));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        rightSliderLabel = new QLabel(frame);
        rightSliderLabel->setObjectName(QString::fromUtf8("rightSliderLabel"));
        rightSliderLabel->setGeometry(QRect(80, 280, 41, 16));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 280, 21, 17));
        leftSliderLabel = new QLabel(frame);
        leftSliderLabel->setObjectName(QString::fromUtf8("leftSliderLabel"));
        leftSliderLabel->setGeometry(QRect(330, 280, 41, 16));
        speedLabel = new QLabel(frame);
        speedLabel->setObjectName(QString::fromUtf8("speedLabel"));
        speedLabel->setGeometry(QRect(370, 40, 16, 17));
        frame_2 = new QFrame(H3Form);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 441, 91));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        selectRobotNsButton = new QPushButton(frame_2);
        selectRobotNsButton->setObjectName(QString::fromUtf8("selectRobotNsButton"));
        selectRobotNsButton->setGeometry(QRect(270, 10, 131, 21));
        batteryIndicatorLabel = new QLabel(frame_2);
        batteryIndicatorLabel->setObjectName(QString::fromUtf8("batteryIndicatorLabel"));
        batteryIndicatorLabel->setGeometry(QRect(340, 70, 41, 20));
        batteryIndicatorLabel_2 = new QLabel(frame_2);
        batteryIndicatorLabel_2->setObjectName(QString::fromUtf8("batteryIndicatorLabel_2"));
        batteryIndicatorLabel_2->setGeometry(QRect(390, 70, 16, 20));
        commandAPPButton = new QPushButton(frame_2);
        commandAPPButton->setObjectName(QString::fromUtf8("commandAPPButton"));
        commandAPPButton->setGeometry(QRect(270, 40, 131, 21));
        connectionLabel = new QLabel(frame_2);
        connectionLabel->setObjectName(QString::fromUtf8("connectionLabel"));
        connectionLabel->setGeometry(QRect(150, 40, 91, 17));
        splitter = new QSplitter(H3Form);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(0, 0, 0, 0));
        splitter->setOrientation(Qt::Horizontal);
        splitter->raise();
        frame_2->raise();
        frame->raise();
        batteryLabel_2->raise();
        batteryLabel_3->raise();
        batteryLabel->raise();
        robotNsComboBox->raise();
        batteryLabel_8->raise();
        runtimeLabel->raise();
        refreshIconButton->raise();
        seatedImageButton->raise();
        label_2->raise();
        arrowUpButton->raise();
        rightSlider->raise();
        taskStatusLabel->raise();
        sitDownButton->raise();
        stopButton->raise();
        rightStepButton->raise();
        standUpButton->raise();
        leftStepButton->raise();
        leftSlider->raise();
        leftStepLabel->raise();
        batteryLabel_9->raise();
        assistancelabel->raise();
        passiveButton->raise();
        rightSteplabel->raise();
        line->raise();
        walkButton->raise();
        arrowDownButton->raise();
#ifndef QT_NO_SHORTCUT
#endif // QT_NO_SHORTCUT

        retranslateUi(H3Form);

        QMetaObject::connectSlotsByName(H3Form);
    } // setupUi

    void retranslateUi(QWidget *H3Form)
    {
        H3Form->setWindowTitle(QApplication::translate("H3Form", "EXO-H3", nullptr));
#ifndef QT_NO_TOOLTIP
        H3Form->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        batteryLabel_2->setText(QApplication::translate("H3Form", "Robot ns", nullptr));
        batteryLabel_3->setText(QApplication::translate("H3Form", "Connection Status:", nullptr));
        batteryLabel->setText(QApplication::translate("H3Form", "Battery:", nullptr));
        batteryLabel_8->setText(QApplication::translate("H3Form", "Exo-H3 run time:", nullptr));
        runtimeLabel->setText(QApplication::translate("H3Form", "00:00:00:000", nullptr));
        seatedImageButton->setText(QString());
        label_2->setText(QApplication::translate("H3Form", "%", nullptr));
        arrowUpButton->setText(QString());
        taskStatusLabel->setText(QApplication::translate("H3Form", "Standin up", nullptr));
        sitDownButton->setText(QApplication::translate("H3Form", "SIT DOWN", nullptr));
        stopButton->setText(QApplication::translate("H3Form", "STOP", nullptr));
        rightStepButton->setText(QString());
        standUpButton->setText(QApplication::translate("H3Form", "STAND UP", nullptr));
        leftStepButton->setText(QString());
        leftStepLabel->setText(QApplication::translate("H3Form", "Left Step", nullptr));
        batteryLabel_9->setText(QApplication::translate("H3Form", "Exo Status:", nullptr));
        assistancelabel->setText(QApplication::translate("H3Form", "Percentage of assistance", nullptr));
        passiveButton->setText(QApplication::translate("H3Form", "PASSIVE", nullptr));
        rightSteplabel->setText(QApplication::translate("H3Form", "Right Step", nullptr));
        walkButton->setText(QApplication::translate("H3Form", "WALK", nullptr));
        arrowDownButton->setText(QString());
        rightSliderLabel->setText(QApplication::translate("H3Form", "100", nullptr));
        label->setText(QApplication::translate("H3Form", "%", nullptr));
        leftSliderLabel->setText(QApplication::translate("H3Form", "100", nullptr));
        speedLabel->setText(QApplication::translate("H3Form", "1", nullptr));
        selectRobotNsButton->setText(QApplication::translate("H3Form", "Connect", nullptr));
        batteryIndicatorLabel->setText(QApplication::translate("H3Form", "0", nullptr));
        batteryIndicatorLabel_2->setText(QApplication::translate("H3Form", "V", nullptr));
        commandAPPButton->setText(QApplication::translate("H3Form", "CAN->BL", nullptr));
        connectionLabel->setText(QApplication::translate("H3Form", "Disonnected", nullptr));
    } // retranslateUi

};

namespace Ui {
    class H3Form: public Ui_H3Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_H3_COMMAND_H
