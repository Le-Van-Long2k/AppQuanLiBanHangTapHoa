#include "DangNhap.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui ->lineEdit_UserName-> text();
    QString password = ui ->lineEdit_2_Password-> text();

    if (username == "app" && password =="app"){
       QMessageBox :: information(this,"Login","Wellcome!!!");
       hide();
       mainWindow1 = new MainWindow1(this);
       mainWindow1 ->show();
    }
    else{
        QMessageBox:: warning(this,"Login","info not match!!!");
    }
}
