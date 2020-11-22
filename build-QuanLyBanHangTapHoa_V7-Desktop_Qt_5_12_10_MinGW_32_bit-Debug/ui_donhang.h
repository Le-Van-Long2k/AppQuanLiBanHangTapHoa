/********************************************************************************
** Form generated from reading UI file 'donhang.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONHANG_H
#define UI_DONHANG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DonHang
{
public:
    QPushButton *pushButton;
    QTableView *tableView;

    void setupUi(QDialog *DonHang)
    {
        if (DonHang->objectName().isEmpty())
            DonHang->setObjectName(QString::fromUtf8("DonHang"));
        DonHang->resize(400, 300);
        pushButton = new QPushButton(DonHang);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 240, 93, 28));
        tableView = new QTableView(DonHang);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(70, 20, 256, 192));

        retranslateUi(DonHang);

        QMetaObject::connectSlotsByName(DonHang);
    } // setupUi

    void retranslateUi(QDialog *DonHang)
    {
        DonHang->setWindowTitle(QApplication::translate("DonHang", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("DonHang", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DonHang: public Ui_DonHang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONHANG_H
