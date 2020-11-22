/********************************************************************************
** Form generated from reading UI file 'm1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_M1_H
#define UI_M1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_M1
{
public:
    QAction *actionknvklf;
    QAction *actionfvjfklv;
    QAction *actiondckd;
    QAction *actionsvkv;
    QAction *actionvfkv;
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menumenu;
    QMenu *menuHang_hoa;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *M1)
    {
        if (M1->objectName().isEmpty())
            M1->setObjectName(QString::fromUtf8("M1"));
        M1->resize(800, 600);
        actionknvklf = new QAction(M1);
        actionknvklf->setObjectName(QString::fromUtf8("actionknvklf"));
        actionfvjfklv = new QAction(M1);
        actionfvjfklv->setObjectName(QString::fromUtf8("actionfvjfklv"));
        actiondckd = new QAction(M1);
        actiondckd->setObjectName(QString::fromUtf8("actiondckd"));
        actionsvkv = new QAction(M1);
        actionsvkv->setObjectName(QString::fromUtf8("actionsvkv"));
        actionvfkv = new QAction(M1);
        actionvfkv->setObjectName(QString::fromUtf8("actionvfkv"));
        centralwidget = new QWidget(M1);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 731, 531));
        label->setPixmap(QPixmap(QString::fromUtf8("F:/H\303\254nh \341\272\243nh/Saved Pictures/hinh-nen-full-hd-1080-choi-non-moi-nay-dep_022855719.jpg")));
        label->setScaledContents(true);
        M1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(M1);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menumenu = new QMenu(menubar);
        menumenu->setObjectName(QString::fromUtf8("menumenu"));
        menuHang_hoa = new QMenu(menubar);
        menuHang_hoa->setObjectName(QString::fromUtf8("menuHang_hoa"));
        M1->setMenuBar(menubar);
        statusbar = new QStatusBar(M1);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        M1->setStatusBar(statusbar);

        menubar->addAction(menumenu->menuAction());
        menubar->addAction(menuHang_hoa->menuAction());
        menumenu->addAction(actiondckd);
        menumenu->addAction(actionsvkv);
        menumenu->addAction(actionvfkv);
        menuHang_hoa->addAction(actionknvklf);
        menuHang_hoa->addAction(actionfvjfklv);

        retranslateUi(M1);

        QMetaObject::connectSlotsByName(M1);
    } // setupUi

    void retranslateUi(QMainWindow *M1)
    {
        M1->setWindowTitle(QCoreApplication::translate("M1", "MainWindow", nullptr));
        actionknvklf->setText(QCoreApplication::translate("M1", "knvklf", nullptr));
        actionfvjfklv->setText(QCoreApplication::translate("M1", "fvjfklv", nullptr));
        actiondckd->setText(QCoreApplication::translate("M1", "dckd", nullptr));
        actionsvkv->setText(QCoreApplication::translate("M1", "svkv", nullptr));
        actionvfkv->setText(QCoreApplication::translate("M1", "vfkv", nullptr));
        label->setText(QString());
        menumenu->setTitle(QCoreApplication::translate("M1", "menu", nullptr));
        menuHang_hoa->setTitle(QCoreApplication::translate("M1", "Hang hoa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class M1: public Ui_M1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_M1_H
