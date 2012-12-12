/********************************************************************************
** Form generated from reading UI file 'robotinformation.ui'
**
** Created: Wed Dec 12 12:51:49 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTINFORMATION_H
#define UI_ROBOTINFORMATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RobotInformation
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSlider *speedSlider;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *SensorsGroupBox;
    QVBoxLayout *verticalLayout_3;
    QListView *sensorsListView;
    QHBoxLayout *horizontalLayout;
    QGroupBox *ActuatorGroupBox;
    QVBoxLayout *verticalLayout_2;
    QListView *actuatorsListView;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *movementActuatorGroupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *ChainsRadioButton;
    QRadioButton *wheelsRadioButton;

    void setupUi(QWidget *RobotInformation)
    {
        if (RobotInformation->objectName().isEmpty())
            RobotInformation->setObjectName(QString::fromUtf8("RobotInformation"));
        RobotInformation->resize(314, 566);
        RobotInformation->setMinimumSize(QSize(314, 0));
        RobotInformation->setMaximumSize(QSize(314, 16777215));
        verticalLayout_4 = new QVBoxLayout(RobotInformation);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(RobotInformation);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        speedSlider = new QSlider(RobotInformation);
        speedSlider->setObjectName(QString::fromUtf8("speedSlider"));
        speedSlider->setMaximum(100);
        speedSlider->setValue(50);
        speedSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(speedSlider);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        SensorsGroupBox = new QGroupBox(RobotInformation);
        SensorsGroupBox->setObjectName(QString::fromUtf8("SensorsGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SensorsGroupBox->sizePolicy().hasHeightForWidth());
        SensorsGroupBox->setSizePolicy(sizePolicy);
        SensorsGroupBox->setMinimumSize(QSize(314, 0));
        SensorsGroupBox->setMaximumSize(QSize(314, 16777215));
        verticalLayout_3 = new QVBoxLayout(SensorsGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        sensorsListView = new QListView(SensorsGroupBox);
        sensorsListView->setObjectName(QString::fromUtf8("sensorsListView"));

        verticalLayout_3->addWidget(sensorsListView);


        horizontalLayout_2->addWidget(SensorsGroupBox);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ActuatorGroupBox = new QGroupBox(RobotInformation);
        ActuatorGroupBox->setObjectName(QString::fromUtf8("ActuatorGroupBox"));
        sizePolicy.setHeightForWidth(ActuatorGroupBox->sizePolicy().hasHeightForWidth());
        ActuatorGroupBox->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(ActuatorGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        actuatorsListView = new QListView(ActuatorGroupBox);
        actuatorsListView->setObjectName(QString::fromUtf8("actuatorsListView"));

        verticalLayout_2->addWidget(actuatorsListView);


        horizontalLayout->addWidget(ActuatorGroupBox);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        movementActuatorGroupBox = new QGroupBox(RobotInformation);
        movementActuatorGroupBox->setObjectName(QString::fromUtf8("movementActuatorGroupBox"));
        verticalLayout = new QVBoxLayout(movementActuatorGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ChainsRadioButton = new QRadioButton(movementActuatorGroupBox);
        ChainsRadioButton->setObjectName(QString::fromUtf8("ChainsRadioButton"));

        verticalLayout->addWidget(ChainsRadioButton);

        wheelsRadioButton = new QRadioButton(movementActuatorGroupBox);
        wheelsRadioButton->setObjectName(QString::fromUtf8("wheelsRadioButton"));

        verticalLayout->addWidget(wheelsRadioButton);


        horizontalLayout_4->addWidget(movementActuatorGroupBox);


        verticalLayout_4->addLayout(horizontalLayout_4);


        retranslateUi(RobotInformation);

        QMetaObject::connectSlotsByName(RobotInformation);
    } // setupUi

    void retranslateUi(QWidget *RobotInformation)
    {
        RobotInformation->setWindowTitle(QApplication::translate("RobotInformation", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RobotInformation", "Vitesse : ", 0, QApplication::UnicodeUTF8));
        SensorsGroupBox->setTitle(QApplication::translate("RobotInformation", "Sensors", 0, QApplication::UnicodeUTF8));
        ActuatorGroupBox->setTitle(QApplication::translate("RobotInformation", "Actuators", 0, QApplication::UnicodeUTF8));
        movementActuatorGroupBox->setTitle(QApplication::translate("RobotInformation", "Movement actuator", 0, QApplication::UnicodeUTF8));
        ChainsRadioButton->setText(QApplication::translate("RobotInformation", "Chains", 0, QApplication::UnicodeUTF8));
        wheelsRadioButton->setText(QApplication::translate("RobotInformation", "Wheels", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RobotInformation: public Ui_RobotInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTINFORMATION_H
