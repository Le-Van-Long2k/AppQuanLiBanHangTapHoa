#include "database.h"
#include "QSqlQuery"
#include <QSqlError>
#include <QString>

Database::Database(const QString &server,
                   const QString &driver,
                   const QString &user,
                   const QString &password,
                   const QString &databaseName,
                   bool trustedConection = true)
{
    mDatabase = QSqlDatabase::addDatabase("DESKTOP-MO3TK8F");
    mDatabaseName = databaseName;
    mServer = server;
    mDriver = driver;
    mUser = user;
    mPassword = password;
    mTrustedConection = trustedConection;
}

bool Database::openDatabase(QString *error)
{
   mDatabase.setDatabaseName();
   if(!mDatabase.open())
   {
       if(error != nullptr)
       {
           *error = mDatabase.lastError().text();
           return false;
       }

   }
   return true;
}
