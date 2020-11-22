/********************************************************************************
** Form generated from reading UI file 'dangnhap.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DANGNHAP_H
#define UI_DANGNHAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DangNhap
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_Username;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_DangNhap;
    QPushButton *pushButton_Thoat;
    QLabel *label_TrangThai;
    QLabel *label_HinhAnh;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *DangNhap)
    {
        if (DangNhap->objectName().isEmpty())
            DangNhap->setObjectName(QString::fromUtf8("DangNhap"));
        DangNhap->resize(630, 478);
        groupBox = new QGroupBox(DangNhap);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(300, 160, 311, 221));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 131, 31));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 81, 31));
        label_2->setFont(font);
        lineEdit_Username = new QLineEdit(groupBox);
        lineEdit_Username->setObjectName(QString::fromUtf8("lineEdit_Username"));
        lineEdit_Username->setGeometry(QRect(150, 60, 131, 22));
        lineEdit_Password = new QLineEdit(groupBox);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(150, 100, 131, 22));
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        pushButton_DangNhap = new QPushButton(groupBox);
        pushButton_DangNhap->setObjectName(QString::fromUtf8("pushButton_DangNhap"));
        pushButton_DangNhap->setGeometry(QRect(20, 157, 111, 31));
        pushButton_Thoat = new QPushButton(groupBox);
        pushButton_Thoat->setObjectName(QString::fromUtf8("pushButton_Thoat"));
        pushButton_Thoat->setGeometry(QRect(170, 157, 111, 31));
        label_TrangThai = new QLabel(DangNhap);
        label_TrangThai->setObjectName(QString::fromUtf8("label_TrangThai"));
        label_TrangThai->setGeometry(QRect(270, 400, 331, 16));
        label_HinhAnh = new QLabel(DangNhap);
        label_HinhAnh->setObjectName(QString::fromUtf8("label_HinhAnh"));
        label_HinhAnh->setGeometry(QRect(20, 130, 211, 271));
        label_HinhAnh->setPixmap(QPixmap(QString::fromUtf8("F:/H\303\254nh \341\272\243nh/Saved Pictures/quan ly ban hang.png")));
        label_HinhAnh->setScaledContents(true);
        label_3 = new QLabel(DangNhap);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-6, -5, 641, 131));
        label_3->setPixmap(QPixmap(QString::fromUtf8("F:/H\303\254nh \341\272\243nh/Saved Pictures/Screenshot 2020-11-22 151629.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(DangNhap);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 120, 631, 361));
        label_4->setPixmap(QPixmap(QString::fromUtf8("F:/H\303\254nh \341\272\243nh/Saved Pictures/sky660.jpg")));
        label_5 = new QLabel(DangNhap);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 440, 171, 16));
        label_4->raise();
        label_3->raise();
        groupBox->raise();
        label_TrangThai->raise();
        label_HinhAnh->raise();
        label_5->raise();

        retranslateUi(DangNhap);

        QMetaObject::connectSlotsByName(DangNhap);
    } // setupUi

    void retranslateUi(QWidget *DangNhap)
    {
        DangNhap->setWindowTitle(QApplication::translate("DangNhap", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("DangNhap", "\304\220\304\203ng nh\341\272\255p", nullptr));
        label->setText(QApplication::translate("DangNhap", "T\303\252n ng\306\260\341\273\235i d\303\271ng", nullptr));
        label_2->setText(QApplication::translate("DangNhap", "M\341\272\255t kh\341\272\251u", nullptr));
        pushButton_DangNhap->setText(QApplication::translate("DangNhap", "\304\220\304\203ng nh\341\272\255p", nullptr));
        pushButton_Thoat->setText(QApplication::translate("DangNhap", "Tho\303\241t", nullptr));
        label_TrangThai->setText(QApplication::translate("DangNhap", "Tr\341\272\241ng th\303\241i", nullptr));
        label_HinhAnh->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QApplication::translate("DangNhap", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DangNhap: public Ui_DangNhap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANGNHAP_H
