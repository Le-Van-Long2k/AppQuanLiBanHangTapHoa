/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <ActiveQt/QAxWidget>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGroupBox *groupBox;
    QLineEdit *lineEdit_username;
    QLabel *label_username;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QLabel *label;
    QPushButton *pushButton_login;
    QPushButton *pushButton_quit;
    QLabel *label_pic1;
    QDateTimeEdit *dateTimeEdit;
    QAxWidget *axWidget;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(413, 377);
        groupBox = new QGroupBox(Login);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(130, 50, 241, 161));
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(120, 50, 113, 22));
        label_username = new QLabel(groupBox);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        label_username->setGeometry(QRect(14, 50, 71, 20));
        label_password = new QLabel(groupBox);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(14, 100, 71, 20));
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(120, 100, 113, 22));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 260, 221, 16));
        pushButton_login = new QPushButton(Login);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setGeometry(QRect(130, 230, 93, 28));
        pushButton_quit = new QPushButton(Login);
        pushButton_quit->setObjectName(QString::fromUtf8("pushButton_quit"));
        pushButton_quit->setGeometry(QRect(270, 230, 93, 28));
        label_pic1 = new QLabel(Login);
        label_pic1->setObjectName(QString::fromUtf8("label_pic1"));
        label_pic1->setGeometry(QRect(0, 60, 131, 161));
        label_pic1->setPixmap(QPixmap(QString::fromUtf8("F:/H\303\254nh \341\272\243nh/Saved Pictures/quan ly ban hang.png")));
        label_pic1->setScaledContents(true);
        dateTimeEdit = new QDateTimeEdit(Login);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(20, 310, 194, 22));
        axWidget = new QAxWidget(Login);
        axWidget->setObjectName(QString::fromUtf8("axWidget"));
        axWidget->setProperty("geometry", QVariant(QRect(270, 280, 80, 70)));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Login", "SignIn", nullptr));
        label_username->setText(QCoreApplication::translate("Login", "Username", nullptr));
        label_password->setText(QCoreApplication::translate("Login", "Password", nullptr));
        label->setText(QCoreApplication::translate("Login", "Status", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Login", "Login", nullptr));
        pushButton_quit->setText(QCoreApplication::translate("Login", "Quit", nullptr));
        label_pic1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
