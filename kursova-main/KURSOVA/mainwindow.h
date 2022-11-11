#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "newgame.h"
#include"issueticket.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addGameBtn_clicked();

    void on_searchBtn_clicked();
    void on_inputClubName_textChanged(const QString &arg1);

    void on_inputClubName_editingFinished();

private:
    Ui::MainWindow *ui;

    NewGame *addGame;
    issueTicket *addTicket;
};
#endif // MAINWINDOW_H
