/********************************************************************************
** Form generated from reading UI file 'issueticket.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISSUETICKET_H
#define UI_ISSUETICKET_H

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

class Ui_issueTicket
{
public:
    QPushButton *confirmNewTicketBtn;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *team1label;
    QLabel *team2label;
    QLabel *timelabel;
    QLabel *stadiumlabel;
    QLabel *sectorlabel;
    QLabel *rowlabel;
    QLabel *placelabel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *nameLE;
    QLineEdit *surnameLE;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QListView *listView_2;
    QListView *listView;

    void setupUi(QDialog *issueTicket)
    {
        if (issueTicket->objectName().isEmpty())
            issueTicket->setObjectName(QString::fromUtf8("issueTicket"));
        issueTicket->resize(712, 497);
        confirmNewTicketBtn = new QPushButton(issueTicket);
        confirmNewTicketBtn->setObjectName(QString::fromUtf8("confirmNewTicketBtn"));
        confirmNewTicketBtn->setGeometry(QRect(330, 410, 139, 24));
        layoutWidget = new QWidget(issueTicket);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 150, 101, 291));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        team1label = new QLabel(layoutWidget);
        team1label->setObjectName(QString::fromUtf8("team1label"));

        verticalLayout->addWidget(team1label);

        team2label = new QLabel(layoutWidget);
        team2label->setObjectName(QString::fromUtf8("team2label"));

        verticalLayout->addWidget(team2label);

        timelabel = new QLabel(layoutWidget);
        timelabel->setObjectName(QString::fromUtf8("timelabel"));

        verticalLayout->addWidget(timelabel);

        stadiumlabel = new QLabel(layoutWidget);
        stadiumlabel->setObjectName(QString::fromUtf8("stadiumlabel"));

        verticalLayout->addWidget(stadiumlabel);

        sectorlabel = new QLabel(layoutWidget);
        sectorlabel->setObjectName(QString::fromUtf8("sectorlabel"));

        verticalLayout->addWidget(sectorlabel);

        rowlabel = new QLabel(layoutWidget);
        rowlabel->setObjectName(QString::fromUtf8("rowlabel"));

        verticalLayout->addWidget(rowlabel);

        placelabel = new QLabel(layoutWidget);
        placelabel->setObjectName(QString::fromUtf8("placelabel"));

        verticalLayout->addWidget(placelabel);

        layoutWidget1 = new QWidget(issueTicket);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 80, 241, 134));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        nameLE = new QLineEdit(layoutWidget1);
        nameLE->setObjectName(QString::fromUtf8("nameLE"));

        verticalLayout_3->addWidget(nameLE);

        surnameLE = new QLineEdit(layoutWidget1);
        surnameLE->setObjectName(QString::fromUtf8("surnameLE"));

        verticalLayout_3->addWidget(surnameLE);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        horizontalLayout->addLayout(verticalLayout_2);

        listView_2 = new QListView(issueTicket);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));
        listView_2->setGeometry(QRect(70, 180, 191, 121));
        listView = new QListView(issueTicket);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(70, 130, 191, 121));

        retranslateUi(issueTicket);

        QMetaObject::connectSlotsByName(issueTicket);
    } // setupUi

    void retranslateUi(QDialog *issueTicket)
    {
        issueTicket->setWindowTitle(QCoreApplication::translate("issueTicket", "Dialog", nullptr));
        confirmNewTicketBtn->setText(QCoreApplication::translate("issueTicket", "\320\237\321\226\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\320\270", nullptr));
        team1label->setText(QCoreApplication::translate("issueTicket", "TextLabel", nullptr));
        team2label->setText(QCoreApplication::translate("issueTicket", "TextLabel", nullptr));
        timelabel->setText(QCoreApplication::translate("issueTicket", "TextLabel", nullptr));
        stadiumlabel->setText(QCoreApplication::translate("issueTicket", "TextLabel", nullptr));
        sectorlabel->setText(QCoreApplication::translate("issueTicket", "TextLabel", nullptr));
        rowlabel->setText(QCoreApplication::translate("issueTicket", "TextLabel", nullptr));
        placelabel->setText(QCoreApplication::translate("issueTicket", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("issueTicket", "\320\206\320\274'\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("issueTicket", "\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class issueTicket: public Ui_issueTicket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISSUETICKET_H
