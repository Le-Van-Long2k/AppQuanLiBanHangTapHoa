#ifndef DANGNHAP_H
#define DANGNHAP_H

#include <QDialog>
#include <QMainWindow>
#include <QtSql>
#include <QDialog>
#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

namespace Ui {
class DangNhap;
}

class DangNhap : public QDialog
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
           qDebug()<<("Kết nối thất bại");
           return false;
       }
       else{
           qDebug()<<("Đang kết nối");
           return true;
           }
    }

public:
    explicit DangNhap(QWidget *parent = nullptr);
    ~DangNhap();

private slots:


    void on_pushButton_DangNhap_clicked();

    void on_pushButton_Thoat_clicked();

private:
    Ui::DangNhap *ui;

};

#endif // DANGNHAP_H
