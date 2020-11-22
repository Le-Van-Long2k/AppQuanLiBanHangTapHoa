/********************************************************************************
** Form generated from reading UI file 'nguoidung.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NGUOIDUNG_H
#define UI_NGUOIDUNG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_NguoiDung
{
public:
    QLabel *label;
    QPushButton *pushButton_Xem;
    QTableView *tableView;

    void setupUi(QDialog *NguoiDung)
    {
        if (NguoiDung->objectName().isEmpty())
            NguoiDung->setObjectName(QString::fromUtf8("NguoiDung"));
        NguoiDung->resize(400, 300);
        label = new QLabel(NguoiDung);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 280, 231, 16));
        pushButton_Xem = new QPushButton(NguoiDung);
        pushButton_Xem->setObjectName(QString::fromUtf8("pushButton_Xem"));
        pushButton_Xem->setGeometry(QRect(10, 220, 93, 28));
        tableView = new QTableView(NguoiDung);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(100, 20, 256, 192));

        retranslateUi(NguoiDung);

        QMetaObject::connectSlotsByName(NguoiDung);
    } // setupUi

    void retranslateUi(QDialog *NguoiDung)
    {
        NguoiDung->setWindowTitle(QApplication::translate("NguoiDung", "Dialog", nullptr));
        label->setText(QString());
        pushButton_Xem->setText(QApplication::translate("NguoiDung", "Xem", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NguoiDung: public Ui_NguoiDung {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NGUOIDUNG_H
