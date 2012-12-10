#include "robotinformation.h"
#include "ui_robotinformation.h"

#include <QStyleOption>
#include <QPainter>
#include <QStyle>

RobotInformation::RobotInformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RobotInformation)
{
    ui->setupUi(this);

    qApp->setStyleSheet("RobotInformation {background-image: url(:/backgrounds/widgetsbg);}");
}

RobotInformation::~RobotInformation()
{
    delete ui;
}

/**
  * Override paintEvent for RobotInformation. Need it to apply a css to a QWidget.
  */
void RobotInformation::paintEvent(QPaintEvent *)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
