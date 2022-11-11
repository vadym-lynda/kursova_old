#include <QApplication>
#include "dbmanager.h"
#include "mainwindow.h"
#include "sqldbmanager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DBManager *db;
    db = SqliteDBManager::getInstance();
    db->connectToDataBase();
    MainWindow w;
    w.show();
    return a.exec();
}
