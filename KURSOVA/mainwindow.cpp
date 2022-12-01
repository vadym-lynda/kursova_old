#include "mainwindow.h"
#include "issueticket.h"
#include "newgame.h"
#include "sqldbmanager.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->gameListView->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addGameBtn_clicked()
{
    addGame = new NewGame();
    addGame->show();
}

void MainWindow::on_searchBtn_clicked()
{

    addTicket = new issueTicket(this);
    addTicket->show();
}

void MainWindow::on_inputClubName_textChanged(const QString &arg1)
{
    ui->gameListView->show();
}

void MainWindow::on_inputClubName_editingFinished()
{
    ui->gameListView->hide();
}
