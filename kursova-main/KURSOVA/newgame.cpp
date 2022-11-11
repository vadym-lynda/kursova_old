#include "newgame.h"

#include "sqldbmanager.h"
#include "ui_newgame.h"
NewGame::NewGame(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NewGame)

{
    db = SqliteDBManager::getInstance();
    ui->setupUi(this);
    model.setTable(TABLE_FOOTBALL_GAME);

    model.select();
    proxyModel.setSourceModel(&model);
    ui->listView->setModel(&proxyModel);
    proxyModel.setFilterCaseSensitivity(Qt::CaseSensitivity::CaseInsensitive);
    connect(ui->team1LE,
            &QLineEdit::textChanged,
            &proxyModel,
            &QSortFilterProxyModel::setFilterFixedString);
    ui->listView->setModelColumn(2);
    ui->listView->hide();
    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void NewGame::on_ConfirmNewGameBtn_clicked()
{
    hide();
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
