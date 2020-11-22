#include "danhmucnhanvien.h"
#include "ui_danhmucnhanvien.h"

DanhMucNhanVien::DanhMucNhanVien(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DanhMucNhanVien)
{
    ui->setupUi(this);
}

DanhMucNhanVien::~DanhMucNhanVien()
{
    delete ui;
}
