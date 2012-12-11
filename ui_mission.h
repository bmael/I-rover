/********************************************************************************
** Form generated from reading UI file 'mission.ui'
**
** Created: Wed Dec 12 00:54:01 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MISSION_H
#define UI_MISSION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mission
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QTextBrowser *textBrowser;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *startPushButton;
    QPushButton *stopPushButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *Mission)
    {
        if (Mission->objectName().isEmpty())
            Mission->setObjectName(QString::fromUtf8("Mission"));
        Mission->resize(314, 145);
        Mission->setMinimumSize(QSize(314, 0));
        Mission->setMaximumSize(QSize(314, 16777215));
        verticalLayout = new QVBoxLayout(Mission);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 4);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(Mission);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        textBrowser = new QTextBrowser(Mission);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        horizontalLayout_2->addWidget(textBrowser);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        startPushButton = new QPushButton(Mission);
        startPushButton->setObjectName(QString::fromUtf8("startPushButton"));

        horizontalLayout_5->addWidget(startPushButton);

        stopPushButton = new QPushButton(Mission);
        stopPushButton->setObjectName(QString::fromUtf8("stopPushButton"));

        horizontalLayout_5->addWidget(stopPushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(Mission);

        QMetaObject::connectSlotsByName(Mission);
    } // setupUi

    void retranslateUi(QWidget *Mission)
    {
        Mission->setWindowTitle(QApplication::translate("Mission", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Mission", "Goal ", 0, QApplication::UnicodeUTF8));
        startPushButton->setText(QApplication::translate("Mission", "Start", 0, QApplication::UnicodeUTF8));
        stopPushButton->setText(QApplication::translate("Mission", "Stop", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Mission: public Ui_Mission {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MISSION_H
