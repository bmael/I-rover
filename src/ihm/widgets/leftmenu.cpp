#include "leftmenu.h"
#include "ui_leftmenu.h"

#include <QDebug>
#include <QPropertyAnimation>
LeftMenu::LeftMenu(QWidget *parent, bool hide) :
    QWidget(parent),
    ui(new Ui::LeftMenu)
{
    ui->setupUi(this);

    connect(ui->mapMenuWidget,SIGNAL(askLoadMap(QString)), this, SIGNAL(askMapLoad(QString)));
    connect(ui->mapMenuWidget, SIGNAL(askUnloadMap()), this, SIGNAL(askUnloadMap()));
}

LeftMenu::~LeftMenu()
{
    delete ui;
}




