#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>

class Database
{
public:
    Database(const QString &server,
             const QString &driver,
             const QString &user,
             const QString &password,
             const QString &databaseName,
             bool trustedConection = true);
    bool openDatabase(QString *error);
private:
    QSqlDatabase mDatabase;
    QString mServer;
    QString mDriver;
    QString mUser;
    QString mPassword;
    QString mDatabaseName;
    bool mTrustedConection;
};

#endif // DATABASE_H
