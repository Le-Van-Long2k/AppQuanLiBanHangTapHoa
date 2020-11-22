/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionTho_t;
    QAction *actionCh_t_li_u;
    QAction *actionNh_n_vi_n;
    QAction *actionKh_ch_h_ng;
    QAction *actionH_ng_h_a;
    QAction *actionH_a_n_b_n;
    QAction *actionH_a_n_nh_p_h_ng;
    QAction *actionH_ng_t_n;
    QAction *actionDoanh_thu;
    QAction *actionTr_gi_p;
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuT_p_tin;
    QMenu *menuDanh_m_c;
    QMenu *menuH_a_n;
    QMenu *menuB_o_c_o;
    QMenu *menuTr_gi_p;
    QMenu *menuH_ng_d_n_s_d_ng;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8("F:/H\303\254nh \341\272\243nh/Saved Pictures/quan ly ban hang.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionTho_t = new QAction(MainWindow);
        actionTho_t->setObjectName(QString::fromUtf8("actionTho_t"));
        actionCh_t_li_u = new QAction(MainWindow);
        actionCh_t_li_u->setObjectName(QString::fromUtf8("actionCh_t_li_u"));
        actionNh_n_vi_n = new QAction(MainWindow);
        actionNh_n_vi_n->setObjectName(QString::fromUtf8("actionNh_n_vi_n"));
        actionKh_ch_h_ng = new QAction(MainWindow);
        actionKh_ch_h_ng->setObjectName(QString::fromUtf8("actionKh_ch_h_ng"));
        actionH_ng_h_a = new QAction(MainWindow);
        actionH_ng_h_a->setObjectName(QString::fromUtf8("actionH_ng_h_a"));
        actionH_a_n_b_n = new QAction(MainWindow);
        actionH_a_n_b_n->setObjectName(QString::fromUtf8("actionH_a_n_b_n"));
        actionH_a_n_nh_p_h_ng = new QAction(MainWindow);
        actionH_a_n_nh_p_h_ng->setObjectName(QString::fromUtf8("actionH_a_n_nh_p_h_ng"));
        actionH_ng_t_n = new QAction(MainWindow);
        actionH_ng_t_n->setObjectName(QString::fromUtf8("actionH_ng_t_n"));
        actionDoanh_thu = new QAction(MainWindow);
        actionDoanh_thu->setObjectName(QString::fromUtf8("actionDoanh_thu"));
        actionTr_gi_p = new QAction(MainWindow);
        actionTr_gi_p->setObjectName(QString::fromUtf8("actionTr_gi_p"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 731, 511));
        label->setPixmap(QPixmap(QString::fromUtf8("F:/H\303\254nh \341\272\243nh/Saved Pictures/hinh-nen-full-hd-1080-choi-non-moi-nay-dep_022855719.jpg")));
        label->setScaledContents(true);
        label->setWordWrap(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuT_p_tin = new QMenu(menubar);
        menuT_p_tin->setObjectName(QString::fromUtf8("menuT_p_tin"));
        menuDanh_m_c = new QMenu(menubar);
        menuDanh_m_c->setObjectName(QString::fromUtf8("menuDanh_m_c"));
        menuH_a_n = new QMenu(menubar);
        menuH_a_n->setObjectName(QString::fromUtf8("menuH_a_n"));
        menuB_o_c_o = new QMenu(menubar);
        menuB_o_c_o->setObjectName(QString::fromUtf8("menuB_o_c_o"));
        menuTr_gi_p = new QMenu(menubar);
        menuTr_gi_p->setObjectName(QString::fromUtf8("menuTr_gi_p"));
        menuH_ng_d_n_s_d_ng = new QMenu(menubar);
        menuH_ng_d_n_s_d_ng->setObjectName(QString::fromUtf8("menuH_ng_d_n_s_d_ng"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuT_p_tin->menuAction());
        menubar->addAction(menuDanh_m_c->menuAction());
        menubar->addAction(menuH_a_n->menuAction());
        menubar->addAction(menuB_o_c_o->menuAction());
        menubar->addAction(menuTr_gi_p->menuAction());
        menubar->addAction(menuH_ng_d_n_s_d_ng->menuAction());
        menuT_p_tin->addAction(actionTho_t);
        menuDanh_m_c->addAction(actionCh_t_li_u);
        menuDanh_m_c->addAction(actionNh_n_vi_n);
        menuDanh_m_c->addAction(actionKh_ch_h_ng);
        menuDanh_m_c->addAction(actionH_ng_h_a);
        menuH_a_n->addAction(actionH_a_n_b_n);
        menuH_a_n->addAction(actionH_a_n_nh_p_h_ng);
        menuB_o_c_o->addAction(actionH_ng_t_n);
        menuB_o_c_o->addAction(actionDoanh_thu);
        menuTr_gi_p->addAction(actionTr_gi_p);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Qu\341\272\243n l\303\275 b\303\241n h\303\240ng", nullptr));
        actionTho_t->setText(QApplication::translate("MainWindow", "Tho\303\241t", nullptr));
        actionCh_t_li_u->setText(QApplication::translate("MainWindow", "Ch\341\272\245t li\341\273\207u", nullptr));
        actionNh_n_vi_n->setText(QApplication::translate("MainWindow", "Nh\303\242n vi\303\252n", nullptr));
        actionKh_ch_h_ng->setText(QApplication::translate("MainWindow", "Kh\303\241ch h\303\240ng", nullptr));
        actionH_ng_h_a->setText(QApplication::translate("MainWindow", "H\303\240ng h\303\263a", nullptr));
        actionH_a_n_b_n->setText(QApplication::translate("MainWindow", "H\303\263a \304\221\306\241n b\303\241n", nullptr));
        actionH_a_n_nh_p_h_ng->setText(QApplication::translate("MainWindow", "H\303\263a \304\221\306\241n nh\341\272\255p h\303\240ng", nullptr));
        actionH_ng_t_n->setText(QApplication::translate("MainWindow", "H\303\240ng t\341\273\223n", nullptr));
        actionDoanh_thu->setText(QApplication::translate("MainWindow", "Doanh thu", nullptr));
        actionTr_gi_p->setText(QApplication::translate("MainWindow", "Tr\341\273\243 gi\303\272p", nullptr));
        label->setText(QString());
        menuT_p_tin->setTitle(QApplication::translate("MainWindow", "T\341\272\255p tin", nullptr));
        menuDanh_m_c->setTitle(QApplication::translate("MainWindow", "Danh m\341\273\245c", nullptr));
        menuH_a_n->setTitle(QApplication::translate("MainWindow", "H\303\263a \304\221\306\241n", nullptr));
        menuB_o_c_o->setTitle(QApplication::translate("MainWindow", "B\303\241o c\303\241o", nullptr));
        menuTr_gi_p->setTitle(QApplication::translate("MainWindow", "Tr\341\273\243 gi\303\272p", nullptr));
        menuH_ng_d_n_s_d_ng->setTitle(QApplication::translate("MainWindow", "H\306\260\341\273\233ng d\341\272\253n s\341\273\255 d\341\273\245ng", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
