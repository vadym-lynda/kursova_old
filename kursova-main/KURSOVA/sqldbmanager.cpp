#include "sqldbmanager.h"

#include <QObject>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include <QDate>
#include <QDebug>

SqliteDBManager* SqliteDBManager::instance = nullptr;

SqliteDBManager::SqliteDBManager(){

}

SqliteDBManager *SqliteDBManager::getInstance()
{
    if(instance == nullptr){
        instance = new SqliteDBManager();
    }
    return instance;
}


void SqliteDBManager::connectToDataBase()
{
    /* Перед підключенням до бази даних виконуємо перевірку на її існування.
     * В залежності від результату виконуємо відкриття бази даних або її відновлення
     * */
    if(QFile(DATABASE_NAME).exists()){
        this->openDataBase();
    } else {
        this->restoreDataBase();
    }
}

QSqlDatabase SqliteDBManager::getDB()
{
    return db;
}

/* Методи відновлення бази даних
 * */
bool SqliteDBManager::restoreDataBase()
{
    if(this->openDataBase()){
        if(!this->createTables()){
            return false;
        } else {
            return true;
        }
    } else {
        qDebug() << "Не вдалось відновити базу даних";
        return false;
    }
}

/* Методи для відкриття бази даних
 * */
bool SqliteDBManager::openDataBase()
{
    /* База даних відкривається по вказаному шляху
     * і імені бази даних, якщо вона існує
     * */
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName(DATABASE_HOSTNAME);
    db.setDatabaseName(DATABASE_NAME);
    if(db.open()){
        return true;
    } else
        return false;
}

/* Метод закриття бази даних
 * */
void SqliteDBManager::closeDataBase()
{
    db.close();
}

/* Метод для створення таблиці в базі даних
 * */
bool SqliteDBManager::createTables()
{
    QSqlQuery query;
    if (!query.exec(TABLE_EXAMPLE_GAME_TABLE

                    )) {
        qDebug() << "DataBase: error of create " << query.lastQuery();
        qDebug() << query.lastError().text();

        return false;
    } else
        return true;
}

/* Метод для вставки записів у базу даних
 * */
bool SqliteDBManager::inserIntoTable(const QString tableName, const QVariantList &data)
{
    /* Запит SQL формується із QVariantList,
     * в який передаються данні для вставки в таблицю.
     * */
    QSqlQuery query;
    /* Спочатку SQL-запит формується з ключами,
     * які потім зв'язуються методом bindValue
     * для підставки даних із QVariantList
     * */
    //    if (tableName == TABLE_EXAMPLE){
    //        qDebug() << tableName;
    //        //    query.prepare("INSERT INTO " TABLE_EXAMPLE " ( "
    //        //                TABLE_EXAMPLE_TEAM1 ", "
    //        //       TABLE_EXAMPLE_TEAM2 ", "
    //        //                      TABLE_EXAMPLE_TIME ", "
    //        //                      TABLE_EXAMPLE_STADIUM " ) "
    //    //                                        "VALUES (:team1, :team2, :time, :stadium )");
    //     //   query.bindValue(":team1",        data[0].toString());
    //        query.bindValue(":team2",        data[1].toString());
    //        query.bindValue(":time",      data[2].toTime());
    //        query.bindValue(":stadium",     data[3].toString());
    //}

    // Після чого виконується запит методом exec()
    if(!query.exec()){
        qDebug() << "error insert into " << tableName;
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();

        return false;
    } else
        return true;
}
