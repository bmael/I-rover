/********************************************************************************
** Form generated from reading UI file 'mapmenu.ui'
**
** Created: Thu Dec 6 11:47:16 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPMENU_H
#define UI_MAPMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapMenu
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *mapLineEdit;
    QPushButton *browseMapPushButton;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *missionLineEdit;
    QPushButton *browseMissionPushButton;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *startPausePushButton;
    QPushButton *stopPushButton;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *MapMenu)
    {
        if (MapMenu->objectName().isEmpty())
            MapMenu->setObjectName(QString::fromUtf8("MapMenu"));
        MapMenu->resize(314, 124);
        MapMenu->setMinimumSize(QSize(314, 124));
        MapMenu->setMaximumSize(QSize(314, 124));
        verticalLayout_2 = new QVBoxLayout(MapMenu);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(MapMenu);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        label_2 = new QLabel(MapMenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer_3 = new QSpacerItem(32, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        mapLineEdit = new QLineEdit(MapMenu);
        mapLineEdit->setObjectName(QString::fromUtf8("mapLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mapLineEdit->sizePolicy().hasHeightForWidth());
        mapLineEdit->setSizePolicy(sizePolicy1);
        mapLineEdit->setMaximumSize(QSize(110, 20));

        horizontalLayout_3->addWidget(mapLineEdit);

        browseMapPushButton = new QPushButton(MapMenu);
        browseMapPushButton->setObjectName(QString::fromUtf8("browseMapPushButton"));

        horizontalLayout_3->addWidget(browseMapPushButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        horizontalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        label_3 = new QLabel(MapMenu);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        missionLineEdit = new QLineEdit(MapMenu);
        missionLineEdit->setObjectName(QString::fromUtf8("missionLineEdit"));
        sizePolicy1.setHeightForWidth(missionLineEdit->sizePolicy().hasHeightForWidth());
        missionLineEdit->setSizePolicy(sizePolicy1);
        missionLineEdit->setMaximumSize(QSize(110, 20));

        horizontalLayout_5->addWidget(missionLineEdit);

        browseMissionPushButton = new QPushButton(MapMenu);
        browseMissionPushButton->setObjectName(QString::fromUtf8("browseMissionPushButton"));

        horizontalLayout_5->addWidget(browseMissionPushButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        horizontalLayout_4->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        startPausePushButton = new QPushButton(MapMenu);
        startPausePushButton->setObjectName(QString::fromUtf8("startPausePushButton"));

        horizontalLayout_6->addWidget(startPausePushButton);

        stopPushButton = new QPushButton(MapMenu);
        stopPushButton->setObjectName(QString::fromUtf8("stopPushButton"));

        horizontalLayout_6->addWidget(stopPushButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_6);


        retranslateUi(MapMenu);

        QMetaObject::connectSlotsByName(MapMenu);
    } // setupUi

    void retranslateUi(QWidget *MapMenu)
    {
        MapMenu->setWindowTitle(QApplication::translate("MapMenu", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MapMenu", "Map", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MapMenu", "Select a map", 0, QApplication::UnicodeUTF8));
        browseMapPushButton->setText(QApplication::translate("MapMenu", "Browse", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MapMenu", "Select a mission", 0, QApplication::UnicodeUTF8));
        browseMissionPushButton->setText(QApplication::translate("MapMenu", "Browse", 0, QApplication::UnicodeUTF8));
        startPausePushButton->setText(QApplication::translate("MapMenu", "Start", 0, QApplication::UnicodeUTF8));
        stopPushButton->setText(QApplication::translate("MapMenu", "Stop", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MapMenu: public Ui_MapMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPMENU_H
