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

/**
 * Ask to stop the current mission
 * @brief Mission::on_stopPushButton_clicked
 */
void Mission::on_stopPushButton_clicked()
{
    emit askStopMission();
}
