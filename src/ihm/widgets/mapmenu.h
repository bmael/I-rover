/* ***************************************************
 * File mapmenu.h
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#ifndef MAPMENU_H
#define MAPMENU_H

#include <QWidget>

namespace Ui {
class MapMenu;
}

class MapMenu : public QWidget
{
    Q_OBJECT
    
public:
    explicit MapMenu(QWidget *parent = 0);
    ~MapMenu();

protected:
    void paintEvent(QPaintEvent *); // Override of painEvent.
    
private slots:
    void on_browseMapPushButton_clicked();      // Open a File Dialog to choose the map file
    void on_browseMissionPushButton_clicked();  // Open a File Dialog to choose the Mission file
    void on_strategyPushButton_clicked();       // Open a File Dialog to choose the strategy script
    void on_loadPushButton_clicked();           // Ask to load the map on the scene and mission information in RobotMenu

public slots:
    void allowReloadButton();       // Set Load Button enabled.

signals:
    void askLoadMap(QString file);  // Emit to ask the loading of the map
    void askLoadMission(QString description); // Emit to ask the loading of the description
    void askUnloadMap();            // Emit to ask the unloading of the map from the scene
    void askLoadRobot();            // Emit to ask the loading of the robot on the scene
    void askUpdateLoading(int percent, QString status); // Emit to ask the status of a loading widget.

private:
    Ui::MapMenu *ui;
};

#endif // MAPMENU_H
