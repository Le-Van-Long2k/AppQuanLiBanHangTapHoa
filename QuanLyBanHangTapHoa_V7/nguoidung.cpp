#include "nguoidung.h"
#include "ui_nguoidung.h"
#include <QMessageBox>
#include "dangnhap.h"

NguoiDung::NguoiDung(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NguoiDung)
{
    ui->setupUi(this);
    DangNhap conn;
    if(!conn.connOpen())
        ui->label->setText("Không kết nối được");
    else
       ui->label->setText("Đang kết nối");
    ui->setupUi(this);
}

NguoiDung::~NguoiDung()
{
    delete ui;
}

void NguoiDung::on_pushButton_Xem_clicked()
{
    DangNhap conn;
    QSqlQueryModel *modal = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry = new QSqlQuery(conn.mydb);

    qry->prepare("select * from SanPham");

    qry->exec();
    modal->setQuery(*qry);

    ui ->tableView->setModel(modal);
    ui->tableView->show();

    conn.connClose();
    qDebug() << (modal->rowCount());
}
