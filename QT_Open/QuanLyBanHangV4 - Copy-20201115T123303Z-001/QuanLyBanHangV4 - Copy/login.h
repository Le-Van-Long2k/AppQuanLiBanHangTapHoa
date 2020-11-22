#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT
public:
    QSqlDatabase mydb;
    void connClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen()
    {
       mydb=QSqlDatabase::addDatabase("QSQLITE");
       mydb.setDatabaseName("C:/Users/dell/Desktop/db/mydb.db");

       if(!mydb.open()){
           qDebug()<<("Failed to open the database");
           return false;
       }
       else{
           qDebug()<<("connected...");
           return true;
           }
    }

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::Login *ui;

};

#endif // LOGIN_H
