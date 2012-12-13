#include "robotmenu.h"
#include "ui_robotmenu.h"

#include <QStyleOption>
#include <QPainter>
#include <QStyle>
#include <QPropertyAnimation>

/**
 * @brief Constructs a new RobotMenu widget
 * @param parent
 */
RobotMenu::RobotMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RobotMenu)
{
    ui->setupUi(this);

    _missionHidden = true;
    _informationHidden = true;

    qApp->setStyleSheet("RobotMenu {background-image: url(:/backgrounds/widgetsbg);}");

    // Connection for starting/stoping mission
    connect(ui->MissionInformation,SIGNAL(askStopMission()),ui->robotInformation,SLOT(stopMission()));
    connect(ui->MissionInformation, SIGNAL(askStopMission()), this, SIGNAL(askUnloadMap()));
    connect(ui->MissionInformation, SIGNAL(askStopMission()), this, SIGNAL(askUnloadRobot()));

    connect(ui->MissionInformation,SIGNAL(askStartMission()),ui->robotInformation,SLOT(loadMovementActuator()));

    // connection for loading movement actuator
    connect(ui->robotInformation,SIGNAL(askLoadMovementActuator(MovementActuator*)),ui->MissionInformation,SLOT(loadMovementActuator(MovementActuator*)));

}

/**
 * @brief Destroys the RobotMenu widget.
 */
RobotMenu::~RobotMenu()
{
    delete ui;
}

/**
  * @brief Override paintEvent for RobotInformation. Need it to apply a css to a QWidget.
  */
void RobotMenu::paintEvent(QPaintEvent *)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

/**
 * @brief Show or hide the Mission Widget with an animation
 */
void RobotMenu::on_missionPushButton_clicked()
{
    QPropertyAnimation * animation = new QPropertyAnimation(ui->MissionInformation, "maximumHeight");

    animation->setDuration(700);
    animation->setStartValue(ui->MissionInformation->maximumHeight());

    if(_missionHidden){
        ui->missionPushButton->setIcon(QIcon(":/icons/retractTop"));
        animation->setEndValue(160);
        animation->setEasingCurve(QEasingCurve::OutExpo);
        _missionHidden = false;
    }else{
        animation->setEndValue(0);
        animation->setEasingCurve(QEasingCurve::InExpo);

        ui->missionPushButton->setIcon(QIcon(":/icons/deployBottom"));
        _missionHidden = true;
    }

    animation->start(QPropertyAnimation::DeleteWhenStopped);

}

/**
 * @brief Show or hide the RobotInformation Widget with an animation
 */
void RobotMenu::on_informationPushButton_clicked()
{
    QPropertyAnimation * animation = new QPropertyAnimation(ui->robotInformation, "maximumHeight");

    animation->setDuration(700);
    animation->setStartValue(ui->robotInformation->maximumHeight());

    if(_missionHidden){
        ui->informationPushButton->setIcon(QIcon(":/icons/retractTop"));
        animation->setEndValue(300);
        animation->setEasingCurve(QEasingCurve::OutExpo);
        _missionHidden = false;
    }else{
        animation->setEndValue(0);
        animation->setEasingCurve(QEasingCurve::InExpo);

        ui->informationPushButton->setIcon(QIcon(":/icons/deployBottom"));
        _missionHidden = true;
    }

    animation->start(QPropertyAnimation::DeleteWhenStopped);
}

/**
 * @brief  Called when the user click on Load button.
 * The robot has been initialized by mapMenu widget. Now we have to refresh the new curretn
 * robot information.
 */
void RobotMenu::loadRobotInformation()
{
}
