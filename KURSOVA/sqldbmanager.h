#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QVariantList>

#include <dbmanager.h>

/* Директиви імен таблиці, полів таблиці і бази даних */
#define DATABASE_HOSTNAME   "127.0.0.1"
#define DATABASE_NAME "kursova.sqlite"

#define TABLE_EXAMPLE "football_game"
#define TABLE_EXAMPLE_GAME_TABLE \
    "create table football_game( game_id integer auto increment,  team_1 varchar(30) not null,   " \
    "team_2 varchar(30) not null, `time` date not null, stadium varchar(30) not null );"

#define TABLE_EXAMPLE_CLIENT_TABLE
#define TABLE_EXAMPLE_TICKET_TABLE

class SqliteDBManager : public DBManager
{
public:
    static SqliteDBManager* getInstance();

    void connectToDataBase();
    QSqlDatabase getDB();
    bool insertIntoTable(const QString tableName, QString arr[]);

private:
    // Сам об'єкт бази даних, з яким буде виконуватись робота
    QSqlDatabase    db;

private:

    static SqliteDBManager* instance;

    SqliteDBManager();

    /* Внутрішні методи для роботи з базою даних
     * */
    bool openDataBase();
    bool restoreDataBase();
    void closeDataBase();
    bool createTables();
};

#endif // DATABASE_H
