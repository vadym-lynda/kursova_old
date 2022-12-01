#include "newgame.h"

#include "sqldbmanager.h"
#include "ui_newgame.h"
NewGame::NewGame(QWidget *parent): QDialog(parent), ui(new Ui::NewGame)

{
    db = SqliteDBManager::getInstance();
    ui->setupUi(this);
    model.setTable(TABLE_FOOTBALL_GAME);

    model.select();
    proxyModel.setSourceModel(&model);

    ui->listView->setModel(&proxyModel);
    ui->listView_2->setModel(&proxyModel);
    ui->listView_3->setModel(&proxyModel);
    ui->listView_4->setModel(&proxyModel);
    ui->listView_5->setModel(&proxyModel);
    ui->listView_6->setModel(&proxyModel);
    ui->listView_7->setModel(&proxyModel);

    proxyModel.setFilterCaseSensitivity(Qt::CaseSensitivity::CaseInsensitive);
    connect(ui->team1LE,&QLineEdit::textChanged,&proxyModel, &QSortFilterProxyModel::setFilterFixedString);
    connect(ui->team2LE,&QLineEdit::textChanged,&proxyModel, &QSortFilterProxyModel::setFilterFixedString);
    connect(ui->timeLE,&QLineEdit::textChanged,&proxyModel, &QSortFilterProxyModel::setFilterFixedString);
    connect(ui->stadiumLE,&QLineEdit::textChanged,&proxyModel, &QSortFilterProxyModel::setFilterFixedString);



    ui->listView->setModelColumn(1);
    ui->listView_2->setModelColumn(2);
    ui->listView_2->setModelColumn(3);
    ui->listView_2->setModelColumn(4);
    ui->listView_2->setModelColumn(5);

    ui->listView->hide();
    ui->listView_2->hide();
    ui->listView_3->hide();
    ui->listView_4->hide();
    ui->listView_5->hide();
    ui->listView_6->hide();
    ui->listView_7->hide();

    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->listView_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->listView_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->listView_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->listView_5->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->listView_6->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->listView_7->setEditTriggers(QAbstractItemView::NoEditTriggers);
}



NewGame::~NewGame()
{
    delete ui;
}

void NewGame::on_team1LE_textChanged(const QString &arg1)
{
    proxyModel.setFilterKeyColumn(2);

    ui->listView->show();
}

void NewGame::on_listView_clicked(const QModelIndex &index)
{
    ui->team1LE->setText(proxyModel.data(index).toString());
    ui->listView->hide();
}

void NewGame::on_team1LE_editingFinished()
{
    ui->listView->hide();
}


void NewGame::on_team2LE_textChanged(const QString &arg1)
{
    proxyModel.setFilterKeyColumn(2);
     ui->listView_2->show();
}


void NewGame::on_team2LE_editingFinished()
{
   ui->listView_2->hide();
}


void NewGame::on_listView_2_clicked(const QModelIndex &index)
{
   ui->team2LE->setText(proxyModel.data(index).toString());
   ui->listView_2->hide();
}


void NewGame::on_timeLE_textChanged(const QString &arg1)
{
    proxyModel.setFilterKeyColumn(2);
    ui->listView_3->show();
}


void NewGame::on_timeLE_editingFinished()
{
    ui->listView_3->hide();
}


void NewGame::on_listView_3_clicked(const QModelIndex &index)
{
    ui->timeLE->setText(proxyModel.data(index).toString());
    ui->listView_3->hide();
}


void NewGame::on_stadiumLE_textChanged(const QString &arg1)
{
proxyModel.setFilterKeyColumn(2);
ui->listView_4->show();
}


void NewGame::on_stadiumLE_editingFinished()
{
ui->listView_4->hide();
}


void NewGame::on_listView_4_clicked(const QModelIndex &index)
{
    ui->stadiumLE->setText(proxyModel.data(index).toString());
    ui->listView_4->hide();
}
void NewGame::on_ConfirmNewGameBtn_clicked()
{
    QString arr[4];
    arr[0]=ui->team1LE->text();
    arr[1]=ui->team2LE->text();
    arr[2]=ui->timeLE->text();
    arr[3]=ui->stadiumLE->text();
db->inserIntoTable(TABLE_EXAMPLE,arr);
    hide();
}
