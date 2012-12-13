#include "mapmenu.h"
#include "ui_mapmenu.h"

#include <QFileDialog>

#include <QStyleOption>
#include <QPainter>
#include <QStyle>

#include "robot.h"

MapMenu::MapMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MapMenu)
{
    ui->setupUi(this);
    this->setStyleSheet("MapMenu {background-image: url(:/backgrounds/widgetsbg);}");
}

MapMenu::~MapMenu()
{
    delete ui;
}

/**
  * Open a file dialog to choose a map and write the path of the file on the
  * lineEdit.
  *
  */
void MapMenu::on_browseMapPushButton_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, "Open a map", QString());
    ui->mapLineEdit->setText(file);
}

/**
  * Open a file dialog to choose a mission and write the path of the file on the
  * lineEdit.
  *
  */
void MapMenu::on_browseMissionPushButton_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, "Open a mission", QString());
    ui->missionLineEdit->setText(file);
}

void MapMenu::on_strategyPushButton_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, "Open a strategy", QString());
    ui->strategyLineEdit->setText(file);
}

/**
  * Ask to load the map on the scene and ask to load robot information according to the mission selected.
  */
void MapMenu::on_loadPushButton_clicked()
{
    // Ask to load the map to the scene.
    emit askLoadMap(ui->mapLineEdit->text());

    // Initialize the robot
    Robot::getInstance()->clear(); //clear the old version of the robot

    // Call the parser of mission to initialize the current robot.
    //TODO

    emit askLoadRobot();

    // Ask to load the Robot information
    //TODO connect in left menu : this/robotmenu
    //     connect in robotmenu : robotmenu/robotinformation
}

/**
  * Override paintEvent for MapMenu. Need it to apply a css to a QWidget.
  */
void MapMenu::paintEvent(QPaintEvent *)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}



