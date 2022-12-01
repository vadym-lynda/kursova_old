#include "issueticket.h"
#include "ui_issueticket.h"
#include "sqldbmanager.h"
issueTicket::issueTicket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::issueTicket)
{
    db = SqliteDBManager::getInstance();
    ui->setupUi(this);
    model.setTable(TABLE_FOOTBALL_GAME);

    model.select();
    proxyModel.setSourceModel(&model);

    proxyModel.setFilterCaseSensitivity(Qt::CaseSensitivity::CaseInsensitive);

    connect(ui->nameLE,&QLineEdit::textChanged,&proxyModel, &QSortFilterProxyModel::setFilterFixedString);
    connect(ui->surnameLE,&QLineEdit::textChanged,&proxyModel, &QSortFilterProxyModel::setFilterFixedString);

    ui->listView->setModel(&proxyModel);
    ui->listView_2->setModel(&proxyModel);

    ui->listView->setModelColumn(1);
    ui->listView_2->setModelColumn(2);

    ui->setupUi(this);
    ui->listView->hide();
    ui->listView_2->hide();

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
