/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_ftp;
    QLineEdit *lineEdit_ftp;
    QLabel *label_user;
    QLineEdit *lineEdit_user;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QProgressBar *progressBar;
    QPushButton *Btn_upload;
    QLabel *label_user_2;
    QLabel *label_user_3;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(645, 367);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../heart.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolTipDuration(-1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_ftp = new QLabel(centralWidget);
        label_ftp->setObjectName(QString::fromUtf8("label_ftp"));
        label_ftp->setGeometry(QRect(30, 40, 141, 30));
        label_ftp->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        lineEdit_ftp = new QLineEdit(centralWidget);
        lineEdit_ftp->setObjectName(QString::fromUtf8("lineEdit_ftp"));
        lineEdit_ftp->setGeometry(QRect(200, 40, 400, 30));
        lineEdit_ftp->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        label_user = new QLabel(centralWidget);
        label_user->setObjectName(QString::fromUtf8("label_user"));
        label_user->setGeometry(QRect(69, 100, 91, 30));
        label_user->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        lineEdit_user = new QLineEdit(centralWidget);
        lineEdit_user->setObjectName(QString::fromUtf8("lineEdit_user"));
        lineEdit_user->setGeometry(QRect(190, 100, 120, 30));
        lineEdit_user->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        label_password = new QLabel(centralWidget);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(349, 100, 81, 30));
        label_password->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        lineEdit_password = new QLineEdit(centralWidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(440, 100, 120, 30));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(100, 160, 450, 30));
        progressBar->setValue(24);
        Btn_upload = new QPushButton(centralWidget);
        Btn_upload->setObjectName(QString::fromUtf8("Btn_upload"));
        Btn_upload->setGeometry(QRect(100, 220, 180, 30));
        Btn_upload->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        label_user_2 = new QLabel(centralWidget);
        label_user_2->setObjectName(QString::fromUtf8("label_user_2"));
        label_user_2->setGeometry(QRect(540, 250, 91, 30));
        label_user_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        label_user_2->setOpenExternalLinks(false);
        label_user_3 = new QLabel(centralWidget);
        label_user_3->setObjectName(QString::fromUtf8("label_user_3"));
        label_user_3->setGeometry(QRect(540, 280, 91, 30));
        label_user_3->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 645, 26));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FTP_CLIENT", nullptr));
        label_ftp->setText(QApplication::translate("MainWindow", "FTP server address:", nullptr));
        lineEdit_ftp->setText(QApplication::translate("MainWindow", "ftp://127.0.0.1/", nullptr));
        label_user->setText(QApplication::translate("MainWindow", "Username", nullptr));
        lineEdit_user->setText(QApplication::translate("MainWindow", "luka", nullptr));
        label_password->setText(QApplication::translate("MainWindow", "Password", nullptr));
        lineEdit_password->setText(QApplication::translate("MainWindow", "rtrk", nullptr));
        Btn_upload->setText(QApplication::translate("MainWindow", "UPLOAD", nullptr));
        label_user_2->setText(QApplication::translate("MainWindow", "Luka Karan", nullptr));
        label_user_3->setText(QApplication::translate("MainWindow", "RA50/2016", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
