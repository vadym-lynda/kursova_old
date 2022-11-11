#ifndef NEWGAME_H
#define NEWGAME_H
#include <QDialog>
#include <QSortFilterProxyModel>
#include <QSqlTableModel>
#include "dbmanager.h"
namespace Ui {
class NewGame;
}

class NewGame : public QDialog
{
    Q_OBJECT

public:
    explicit NewGame(QWidget *parent = nullptr);
    ~NewGame();

private slots:
    void on_ConfirmNewGameBtn_clicked();

    void on_team1LE_textChanged(const QString &arg1);

    void on_listView_clicked(const QModelIndex &index);

private:
    QSortFilterProxyModel proxyModel;
    QSqlTableModel model;
    DBManager *db;
    Ui::NewGame *ui;
};

#endif // NEWGAME_H
