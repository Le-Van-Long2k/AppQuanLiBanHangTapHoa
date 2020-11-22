#ifndef DONHANG_H
#define DONHANG_H

#include <QDialog>
#include "dangnhap.h"

namespace Ui {
class DonHang;
}

class DonHang : public QDialog
{
    Q_OBJECT

public:
    DangNhap conn;
    explicit DonHang(QWidget *parent = nullptr);
    ~DonHang();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DonHang *ui;
};

#endif // DONHANG_H
