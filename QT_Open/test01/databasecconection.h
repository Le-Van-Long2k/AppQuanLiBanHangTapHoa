#ifndef DATABASECCONECTION_H
#define DATABASECCONECTION_H

#include <QSqlDatabase>

class DatabasecConection
{
public:
    DatabasecConection();
    bool openDatabase;
private:
    QSqlDatabase mDatabase;
};

#endif // DATABASECCONECTION_H
