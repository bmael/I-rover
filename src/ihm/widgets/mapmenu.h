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
    void on_loadPushButton_clicked();           // Ask to load the map on the scene and mission information in RobotMenu

    void on_strategyPushButton_clicked();

signals:
    void askLoadMap(QString file);  // Emit to ask the loading of the map
    void askUnloadMap();            // Emit to ask the unloading of the map from the scene

private:
    Ui::MapMenu *ui;
};

#endif // MAPMENU_H
