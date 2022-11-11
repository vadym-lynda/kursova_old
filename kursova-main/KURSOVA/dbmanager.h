#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QVariantList>
#define TABLE_FOOTBALL_GAME "football_game"
class DBManager
{
public:
    DBManager();

    /* Методи для безпосередньої роботи з класом
      Підключення до бази даних і вставка записів у таблицю
      */
    virtual void connectToDataBase() = 0;
    virtual QSqlDatabase getDB() = 0;
    virtual bool inserIntoTable(const QString tableName, const QVariantList &data) = 0;
};

#endif // DBMANAGER_H
