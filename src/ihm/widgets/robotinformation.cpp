#include "robotinformation.h"
#include "ui_robotinformation.h"

RobotInformation::RobotInformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RobotInformation)
{
    ui->setupUi(this);
}

RobotInformation::~RobotInformation()
{
    delete ui;
}
