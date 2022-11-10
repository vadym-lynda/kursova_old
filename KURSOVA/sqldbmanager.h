#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QVariantList>

#include <dbmanager.h>

/* Директиви імен таблиці, полів таблиці і бази даних */
#define DATABASE_HOSTNAME   "127.0.0.1"
#define DATABASE_NAME       "kursova.sql"

#define TABLE_EXAMPLE                    "footballgame"
#define TABLE_EXAMPLE_ID                 "game_id"
#define TABLE_EXAMPLE_TEAM1              "team1"
#define TABLE_EXAMPLE_TEAM2              "team2"
#define TABLE_EXAMPLE_TIME               "time"
#define TABLE_EXAMPLE_STADIUM            "stadium"

class SqliteDBManager : public DBManager {

public:
    static SqliteDBManager* getInstance();

    void connectToDataBase();
    QSqlDatabase getDB();
    bool inserIntoTable(const QString tableName, const QVariantList &data);

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
