#include "issueticket.h"
#include "ui_issueticket.h"

issueTicket::issueTicket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::issueTicket)
{
    ui->setupUi(this);
}

issueTicket::~issueTicket()
{
    delete ui;
}

void issueTicket::on_confirmNewTicketBtn_clicked()
{
    hide();
}

