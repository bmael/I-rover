#include "robotmenu.h"
#include "ui_robotmenu.h"

#include <QStyleOption>
#include <QPainter>
#include <QStyle>
#include <QPropertyAnimation>

RobotMenu::RobotMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RobotMenu)
{
    ui->setupUi(this);

    _missionHidden = true;

    qApp->setStyleSheet("RobotMenu {background-image: url(:/backgrounds/widgetsbg);}");
}

RobotMenu::~RobotMenu()
{
    delete ui;
}

/**
  * Override paintEvent for RobotInformation. Need it to apply a css to a QWidget.
  */
void RobotMenu::paintEvent(QPaintEvent *)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

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
