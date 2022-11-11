#include "issueticket.h"
#include "ui_issueticket.h"

issueTicket::issueTicket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::issueTicket)
{
    ui->setupUi(this);
    ui->listView->hide();
    ui->listView_2->hide();
    ui->placelabel->setText("1");
}

issueTicket::~issueTicket()
{
    delete ui;
}

void issueTicket::on_confirmNewTicketBtn_clicked()
{
    hide();
}

void issueTicket::on_nameLE_textChanged(const QString &arg1)
{
    if (arg1 == "1") {
    }
    ui->listView->show();
}

void issueTicket::on_nameLE_editingFinished()
{
    ui->listView->hide();
}

void issueTicket::on_surnameLE_editingFinished()
{
    ui->listView_2->hide();
}

void issueTicket::on_surnameLE_textChanged(const QString &arg1)
{
    ui->listView_2->show();
}
