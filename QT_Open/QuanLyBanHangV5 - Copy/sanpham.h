#ifndef SANPHAM_H
#define SANPHAM_H

#include <QDialog>
#include "login.h"

namespace Ui {
class SanPham;
}

class SanPham : public QDialog
{
    Q_OBJECT

public:
    Login conn;
    explicit SanPham(QWidget *parent = nullptr);
    ~SanPham();

private slots:
    void on_pushButton_Them_clicked();

    void on_pushButton_Xem_clicked();

private:
    Ui::SanPham *ui;
};

#endif // SANPHAM_H
