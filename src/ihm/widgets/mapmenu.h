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
    void on_browseMapPushButton_clicked();
    void on_browseMissionPushButton_clicked();
    void on_startPausePushButton_clicked();

    void on_stopPushButton_clicked();

signals:
    void askLoadMap(QString file);
    void askUnloadMap();

private:
    Ui::MapMenu *ui;
};

#endif // MAPMENU_H
