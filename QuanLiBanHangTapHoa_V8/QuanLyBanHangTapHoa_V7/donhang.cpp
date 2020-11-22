#include "donhang.h"
#include "ui_donhang.h"

DonHang::DonHang(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DonHang)
{
    ui->setupUi(this);
}

DonHang::~DonHang()
{
    delete ui;
}

void DonHang::on_pushButton_clicked()
{
    DangNhap conn;
    QSqlQueryModel *modal = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry = new QSqlQuery(conn.mydb);

    qry->prepare("select * from NguoiDung");

    qry->exec();
    modal->setQuery(*qry);

    ui ->tableView->setModel(modal);
    ui->tableView->show();

    conn.connClose();
    qDebug() << (modal->rowCount());
}
