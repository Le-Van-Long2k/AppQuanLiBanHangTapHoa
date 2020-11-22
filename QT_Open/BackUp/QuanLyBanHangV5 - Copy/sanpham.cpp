#include "sanpham.h"
#include "ui_sanpham.h"

SanPham::SanPham(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SanPham)
{
    ui->setupUi(this);
}

SanPham::~SanPham()
{
    delete ui;
}
