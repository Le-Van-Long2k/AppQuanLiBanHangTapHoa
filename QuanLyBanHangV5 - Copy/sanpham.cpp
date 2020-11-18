#include "sanpham.h"
#include "ui_sanpham.h"
#include <QMessageBox>
#include "login.h"

SanPham::SanPham(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SanPham)
{
    ui->setupUi(this);
    Login conn;
    if(!conn.connOpen())
        ui->label_SanPham->setText("Failed to open the database");
    else
        ui->label_SanPham->setText("connected...");
    ui->setupUi(this);
}

SanPham::~SanPham()
{
    delete ui;
}

void SanPham::on_pushButton_Them_clicked()
{

}

void SanPham::on_pushButton_Xem_clicked()
{
    Login conn;
    QSqlQueryModel *modal = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry = new QSqlQuery(conn.mydb);

    qry->prepare("select * from SanPham");

    qry->exec();
    modal->setQuery(*qry);

    ui ->tableView_SanPham->setModel(modal);
    ui->tableView_SanPham->show();

    conn.connClose();
    qDebug() << (modal->rowCount());
}
