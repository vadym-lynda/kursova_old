#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newgame.h"
#include"issueticket.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_addGameBtn_clicked()
{

    addGame = new NewGame(this);
    addGame->show();

}


void MainWindow::on_searchBtn_clicked()
{

    addTicket = new issueTicket(this);
    addTicket->show();
}

