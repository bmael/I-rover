#ifndef LEFTMENU_H
#define LEFTMENU_H

#include <QWidget>

namespace Ui {
class LeftMenu;
}

class LeftMenu : public QWidget
{
    Q_OBJECT
    
public:
    explicit LeftMenu(QWidget *parent = 0, bool hide = false);
    ~LeftMenu();
    
signals:
    void askMapLoad(QString file);
    void askUnloadMap();

private:
    Ui::LeftMenu *ui;

};

#endif // LEFTMENU_H
