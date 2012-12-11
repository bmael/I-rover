#include "mission.h"
#include "ui_mission.h"

Mission::Mission(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Mission)
{
    ui->setupUi(this);
}

Mission::~Mission()
{
    delete ui;
}
