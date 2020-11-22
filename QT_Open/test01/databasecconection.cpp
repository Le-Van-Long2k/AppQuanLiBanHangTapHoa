#include "databasecconection.h"
#include <QSqlQuery>
#include <QSqlError>

DatabasecConection::DatabasecConection()
{
    mDatabase = QSqlDatabase::addDatabase("QODBC");


}

bool DatabasecConection::openDatabase(QString *error)
{
    mDatabase.setDatabaseName();
    if(!mDatabase.open()){
        if(error != )
        return false;
    }
    return true;
}
