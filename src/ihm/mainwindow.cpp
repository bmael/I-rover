#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPropertyAnimation>
#include <QDebug>
#include "widgets/aboutdialog.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _scene = new QGraphicsScene;
    _mapItem = new QGraphicsPixmapItem;
    _scene->addItem(_mapItem);
       ui->mapGraphicsView->setScene(_scene);

    connect(ui->leftMenuWidget, SIGNAL(askMapLoad(QString)), this, SLOT(mapLoader(QString)));
    connect(ui->leftMenuWidget, SIGNAL(askUnloadMap()), this, SLOT(unloadMap()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
  * Show or hide the left menu with an animation.
  */
void MainWindow::on_showHideLeftMenuPushButton_clicked()
{
    QPropertyAnimation * animation = new QPropertyAnimation(ui->leftMenuWidget, "maximumWidth");

    animation->setDuration(1000);
    animation->setStartValue(ui->leftMenuWidget->maximumWidth());

    if(!_leftMenuHidden){
        animation->setEndValue(0);
        animation->setEasingCurve(QEasingCurve::InBack);

        ui->showHideLeftMenuPushButton->setIcon(QIcon(":/icons/deploy"));
        _leftMenuHidden = true;
    }
    else{
        ui->showHideLeftMenuPushButton->setIcon(QIcon(":/icons/retract"));
        animation->setEndValue(314);
        animation->setEasingCurve(QEasingCurve::OutBack);
        _leftMenuHidden = false;
    }

    animation->start(QPropertyAnimation::DeleteWhenStopped);

}

/**
  * Load the map from the given file to the Scene
  *
  */
void MainWindow::mapLoader(QString file)
{
    _mapItem->setPixmap(QPixmap(file));

}

/**
  * Unload the map from the Scene.
  */
void MainWindow::unloadMap()
{
    _mapItem->setPixmap(QPixmap());
}


/**
  * Show the About dialog.
  *
  */
void MainWindow::on_actionAbout_triggered()
{
    AboutDialog dial;
    dial.show();
}
