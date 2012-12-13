#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsPixmapItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_showHideLeftMenuPushButton_clicked();   // Show or hide the left menu with an animation.
    void on_actionAbout_triggered();                // Display the About dialog

public slots:
    void mapLoader(QString file);   // Load the map on the scene.
    void unloadMap();               // Unload the map from the scene.
    void loadRobot();               // Load the robot on the scene.

private:
    Ui::MainWindow *ui;
    QGraphicsScene * _scene;
    QGraphicsPixmapItem * _mapItem;
    QGraphicsPixmapItem * _robotItem;

    bool _leftMenuHidden;
};

#endif // MAINWINDOW_H
