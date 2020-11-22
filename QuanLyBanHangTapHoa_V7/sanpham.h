#ifndef SANPHAM_H
#define SANPHAM_H

#include <QDialog>
#include "dangnhap.h"
namespace Ui {
class SanPham;
}

class SanPham : public QDialog
{
    Q_OBJECT

public:
    DangNhap conn;
    explicit SanPham(QWidget *parent = nullptr);
    ~SanPham();

private slots:
    void on_pushButton_Them_clicked();

    void on_pushButton_Xoa_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::SanPham *ui;
};

#endif // SANPHAM_H
