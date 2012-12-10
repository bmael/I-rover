#include "mapmenu.h"
#include "ui_mapmenu.h"

#include <QFileDialog>

#include <QStyleOption>
#include <QPainter>
#include <QStyle>

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

/**
  * Start or Pause the current mission.
  *
  */
void MapMenu::on_startPausePushButton_clicked()
{
    // verify the map and emit a signal if all is ok
    //TODO the verification
    emit askLoadMap(ui->mapLineEdit->text());
}

/**
  * Stop the current mission, ask to unload the map and the mission.
  *
  */
void MapMenu::on_stopPushButton_clicked()
{

    ui->mapLineEdit->clear();
    ui->missionLineEdit->clear();

    emit askUnloadMap();
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
