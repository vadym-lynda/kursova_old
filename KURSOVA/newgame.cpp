#include "newgame.h"
#include "ui_newgame.h"

NewGame::NewGame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewGame)
{
    ui->setupUi(this);
}



void NewGame::on_ConfirmNewGameBtn_clicked()
{
    hide();
}

NewGame::~NewGame()
{
    delete ui;
}
