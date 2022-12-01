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

    void on_team1LE_editingFinished();

    void on_team2LE_textChanged(const QString &arg1);

    void on_team2LE_editingFinished();

    void on_listView_2_clicked(const QModelIndex &index);

    void on_timeLE_textChanged(const QString &arg1);

    void on_timeLE_editingFinished();

    void on_listView_3_clicked(const QModelIndex &index);

    void on_stadiumLE_textChanged(const QString &arg1);

    void on_stadiumLE_editingFinished();

    void on_listView_4_clicked(const QModelIndex &index);

private:
    QSortFilterProxyModel proxyModel;
    QSqlTableModel model;
    DBManager *db;
    Ui::NewGame *ui;
};

#endif // NEWGAME_H
