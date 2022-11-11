/********************************************************************************
** Form generated from reading UI file 'newgame.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWGAME_H
#define UI_NEWGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewGame
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *addGameLabel;
    QPushButton *ConfirmNewGameBtn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *team1LE;
    QLineEdit *tea2LE;
    QLineEdit *timeLE;
    QLineEdit *stadiumLE;
    QLineEdit *sectorLE;
    QLineEdit *rowLE;
    QLineEdit *placeLE;
    QVBoxLayout *verticalLayout_3;
    QLabel *team1Label;
    QLabel *team2Label;
    QLabel *timeLabel;
    QLabel *stadiumLabel;
    QLabel *sectorLabel;
    QLabel *rowLabel;
    QLabel *placeLabel;
    QListView *listView;

    void setupUi(QDialog *NewGame)
    {
        if (NewGame->objectName().isEmpty())
            NewGame->setObjectName(QString::fromUtf8("NewGame"));
        NewGame->resize(712, 497);
        layoutWidget = new QWidget(NewGame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(360, -120, 141, 471));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        addGameLabel = new QLabel(layoutWidget);
        addGameLabel->setObjectName(QString::fromUtf8("addGameLabel"));

        verticalLayout_2->addWidget(addGameLabel);

        ConfirmNewGameBtn = new QPushButton(layoutWidget);
        ConfirmNewGameBtn->setObjectName(QString::fromUtf8("ConfirmNewGameBtn"));

        verticalLayout_2->addWidget(ConfirmNewGameBtn);

        layoutWidget1 = new QWidget(NewGame);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 0, 221, 371));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        team1LE = new QLineEdit(layoutWidget1);
        team1LE->setObjectName(QString::fromUtf8("team1LE"));

        verticalLayout->addWidget(team1LE);

        tea2LE = new QLineEdit(layoutWidget1);
        tea2LE->setObjectName(QString::fromUtf8("tea2LE"));

        verticalLayout->addWidget(tea2LE);

        timeLE = new QLineEdit(layoutWidget1);
        timeLE->setObjectName(QString::fromUtf8("timeLE"));

        verticalLayout->addWidget(timeLE);

        stadiumLE = new QLineEdit(layoutWidget1);
        stadiumLE->setObjectName(QString::fromUtf8("stadiumLE"));

        verticalLayout->addWidget(stadiumLE);

        sectorLE = new QLineEdit(layoutWidget1);
        sectorLE->setObjectName(QString::fromUtf8("sectorLE"));

        verticalLayout->addWidget(sectorLE);

        rowLE = new QLineEdit(layoutWidget1);
        rowLE->setObjectName(QString::fromUtf8("rowLE"));

        verticalLayout->addWidget(rowLE);

        placeLE = new QLineEdit(layoutWidget1);
        placeLE->setObjectName(QString::fromUtf8("placeLE"));

        verticalLayout->addWidget(placeLE);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        team1Label = new QLabel(layoutWidget1);
        team1Label->setObjectName(QString::fromUtf8("team1Label"));

        verticalLayout_3->addWidget(team1Label);

        team2Label = new QLabel(layoutWidget1);
        team2Label->setObjectName(QString::fromUtf8("team2Label"));

        verticalLayout_3->addWidget(team2Label);

        timeLabel = new QLabel(layoutWidget1);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        verticalLayout_3->addWidget(timeLabel);

        stadiumLabel = new QLabel(layoutWidget1);
        stadiumLabel->setObjectName(QString::fromUtf8("stadiumLabel"));

        verticalLayout_3->addWidget(stadiumLabel);

        sectorLabel = new QLabel(layoutWidget1);
        sectorLabel->setObjectName(QString::fromUtf8("sectorLabel"));

        verticalLayout_3->addWidget(sectorLabel);

        rowLabel = new QLabel(layoutWidget1);
        rowLabel->setObjectName(QString::fromUtf8("rowLabel"));

        verticalLayout_3->addWidget(rowLabel);

        placeLabel = new QLabel(layoutWidget1);
        placeLabel->setObjectName(QString::fromUtf8("placeLabel"));

        verticalLayout_3->addWidget(placeLabel);


        horizontalLayout->addLayout(verticalLayout_3);

        listView = new QListView(NewGame);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(40, 40, 361, 171));

        retranslateUi(NewGame);

        QMetaObject::connectSlotsByName(NewGame);
    } // setupUi

    void retranslateUi(QDialog *NewGame)
    {
        NewGame->setWindowTitle(QCoreApplication::translate("NewGame", "Dialog", nullptr));
        addGameLabel->setText(QCoreApplication::translate("NewGame", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\320\270 \320\274\320\260\321\202\321\207", nullptr));
        ConfirmNewGameBtn->setText(QCoreApplication::translate("NewGame", "\320\237\321\226\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\320\270", nullptr));
        team1Label->setText(QCoreApplication::translate("NewGame", "\320\232\320\273\321\203\320\261 1", nullptr));
        team2Label->setText(QCoreApplication::translate("NewGame", "\320\232\320\273\321\203\320\261 2", nullptr));
        timeLabel->setText(QCoreApplication::translate("NewGame", "\320\247\320\260\321\201", nullptr));
        stadiumLabel->setText(QCoreApplication::translate("NewGame", "\320\241\321\202\320\260\320\264\321\226\320\276\320\275", nullptr));
        sectorLabel->setText(QCoreApplication::translate("NewGame", "\320\241\320\265\320\272\321\202\320\276\321\200\320\270", nullptr));
        rowLabel->setText(QCoreApplication::translate("NewGame", "\320\240\321\217\320\264\320\270", nullptr));
        placeLabel->setText(QCoreApplication::translate("NewGame", "\320\234\321\226\321\201\321\206\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewGame: public Ui_NewGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWGAME_H
