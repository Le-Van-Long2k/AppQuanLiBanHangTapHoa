#ifndef SANPHAM_H
#define SANPHAM_H

#include <QDialog>
#include "login.h"

#include <QWidget>

namespace Ui {
class SanPham;
}

class SanPham : public QWidget
{
    Q_OBJECT

public:
    Login conn;
    explicit SanPham(QWidget *parent = nullptr);
    ~SanPham();

private:
    Ui::SanPham *ui;
};

#endif // SANPHAM_H
