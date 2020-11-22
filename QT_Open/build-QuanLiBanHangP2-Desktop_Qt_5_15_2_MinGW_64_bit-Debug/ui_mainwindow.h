/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNhanVien;
    QAction *actionHang;
    QAction *actionT_m_ki_m;
    QAction *actionH_a_n;
    QAction *actionTho_t;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QListView *listView;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QDateTimeEdit *dateTimeEdit;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuS_n_Ph_m;
    QStatusBar *statusbar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNhanVien = new QAction(MainWindow);
        actionNhanVien->setObjectName(QString::fromUtf8("actionNhanVien"));
        actionHang = new QAction(MainWindow);
        actionHang->setObjectName(QString::fromUtf8("actionHang"));
        actionT_m_ki_m = new QAction(MainWindow);
        actionT_m_ki_m->setObjectName(QString::fromUtf8("actionT_m_ki_m"));
        actionH_a_n = new QAction(MainWindow);
        actionH_a_n->setObjectName(QString::fromUtf8("actionH_a_n"));
        actionTho_t = new QAction(MainWindow);
        actionTho_t->setObjectName(QString::fromUtf8("actionTho_t"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 380, 93, 28));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 380, 93, 28));
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(330, 20, 431, 331));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 50, 211, 201));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 30, 113, 22));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 90, 113, 22));
        dateTimeEdit = new QDateTimeEdit(centralwidget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(360, 400, 194, 22));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuS_n_Ph_m = new QMenu(menubar);
        menuS_n_Ph_m->setObjectName(QString::fromUtf8("menuS_n_Ph_m"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::BottomDockWidgetArea, dockWidget);

        menubar->addAction(menuMenu->menuAction());
        menubar->addAction(menuS_n_Ph_m->menuAction());
        menuMenu->addAction(actionNhanVien);
        menuMenu->addAction(actionHang);
        menuS_n_Ph_m->addAction(actionT_m_ki_m);
        menuS_n_Ph_m->addAction(actionH_a_n);
        menuS_n_Ph_m->addAction(actionTho_t);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNhanVien->setText(QCoreApplication::translate("MainWindow", "NhanVien", nullptr));
        actionHang->setText(QCoreApplication::translate("MainWindow", "Hang", nullptr));
        actionT_m_ki_m->setText(QCoreApplication::translate("MainWindow", "T\303\254m ki\341\272\277m", nullptr));
        actionH_a_n->setText(QCoreApplication::translate("MainWindow", "H\303\263a \304\221\306\241n", nullptr));
        actionTho_t->setText(QCoreApplication::translate("MainWindow", "Tho\303\241t", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        menuS_n_Ph_m->setTitle(QCoreApplication::translate("MainWindow", "S\341\272\243n Ph\341\272\251m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
