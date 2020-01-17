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
#include <QtWidgets/QStatusBar>
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
    QLabel *creator;
    QLabel *index;
    QLabel *projectname;
    QPushButton *Btn_disconnect;
    QPushButton *Btn_download;
    QLabel *label_ftp_2;
    QLabel *label_ftp_3;
    QPushButton *Btn_download_2;
    QPushButton *Btn_download_3;
    QPushButton *Btn_clear;
    QPushButton *Btn_clear_2;
    QPushButton *Btn_server_dir;
    QPushButton *Brn_client_receive;
    QPushButton *Btn_client_send;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(964, 549);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Disabled, QIcon::Off);
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Active, QIcon::On);
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Selected, QIcon::Off);
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Selected, QIcon::On);
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolTipDuration(-1);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{background-image: url(\"C:/Users/Luka/Desktop/FTP_CLIENT/photos/background.jpg\");}\n"
""));
        MainWindow->setAnimated(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        label_ftp = new QLabel(centralWidget);
        label_ftp->setObjectName(QString::fromUtf8("label_ftp"));
        label_ftp->setGeometry(QRect(40, 20, 141, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        font.setKerning(false);
        label_ftp->setFont(font);
        label_ftp->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        label_ftp->setFrameShape(QFrame::NoFrame);
        label_ftp->setFrameShadow(QFrame::Raised);
        label_ftp->setMidLineWidth(1);
        lineEdit_ftp = new QLineEdit(centralWidget);
        lineEdit_ftp->setObjectName(QString::fromUtf8("lineEdit_ftp"));
        lineEdit_ftp->setGeometry(QRect(40, 50, 141, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        font1.setKerning(false);
        lineEdit_ftp->setFont(font1);
        lineEdit_ftp->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        lineEdit_ftp->setFrame(true);
        label_user = new QLabel(centralWidget);
        label_user->setObjectName(QString::fromUtf8("label_user"));
        label_user->setGeometry(QRect(40, 120, 91, 30));
        label_user->setFont(font1);
        label_user->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        label_user->setFrameShape(QFrame::NoFrame);
        label_user->setFrameShadow(QFrame::Raised);
        label_user->setMidLineWidth(1);
        lineEdit_user = new QLineEdit(centralWidget);
        lineEdit_user->setObjectName(QString::fromUtf8("lineEdit_user"));
        lineEdit_user->setGeometry(QRect(40, 150, 91, 30));
        lineEdit_user->setFont(font1);
        lineEdit_user->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        lineEdit_user->setFrame(true);
        label_password = new QLabel(centralWidget);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(40, 220, 81, 30));
        label_password->setFont(font1);
        label_password->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        label_password->setFrameShape(QFrame::NoFrame);
        label_password->setFrameShadow(QFrame::Raised);
        label_password->setMidLineWidth(1);
        lineEdit_password = new QLineEdit(centralWidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(40, 250, 81, 30));
        QFont font2;
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        font2.setKerning(false);
        lineEdit_password->setFont(font2);
        lineEdit_password->setFrame(true);
        lineEdit_password->setEchoMode(QLineEdit::Password);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(260, 60, 481, 51));
        QFont font3;
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        progressBar->setFont(font3);
        progressBar->setAutoFillBackground(true);
        progressBar->setStyleSheet(QString::fromUtf8(""));
        progressBar->setValue(24);
        Btn_upload = new QPushButton(centralWidget);
        Btn_upload->setObjectName(QString::fromUtf8("Btn_upload"));
        Btn_upload->setGeometry(QRect(190, 360, 111, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        Btn_upload->setFont(font4);
        Btn_upload->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        creator = new QLabel(centralWidget);
        creator->setObjectName(QString::fromUtf8("creator"));
        creator->setEnabled(true);
        creator->setGeometry(QRect(860, 60, 91, 30));
        creator->setFont(font1);
        creator->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        creator->setFrameShape(QFrame::NoFrame);
        creator->setFrameShadow(QFrame::Plain);
        creator->setLineWidth(0);
        creator->setMidLineWidth(0);
        creator->setOpenExternalLinks(false);
        creator->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        index = new QLabel(centralWidget);
        index->setObjectName(QString::fromUtf8("index"));
        index->setEnabled(true);
        index->setGeometry(QRect(860, 30, 91, 30));
        index->setFont(font1);
        index->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        index->setFrameShape(QFrame::NoFrame);
        index->setFrameShadow(QFrame::Plain);
        index->setLineWidth(0);
        index->setMidLineWidth(0);
        index->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        projectname = new QLabel(centralWidget);
        projectname->setObjectName(QString::fromUtf8("projectname"));
        projectname->setEnabled(true);
        projectname->setGeometry(QRect(720, 0, 231, 30));
        projectname->setFont(font1);
        projectname->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        projectname->setFrameShape(QFrame::NoFrame);
        projectname->setFrameShadow(QFrame::Plain);
        projectname->setLineWidth(0);
        projectname->setMidLineWidth(0);
        projectname->setOpenExternalLinks(false);
        projectname->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        Btn_disconnect = new QPushButton(centralWidget);
        Btn_disconnect->setObjectName(QString::fromUtf8("Btn_disconnect"));
        Btn_disconnect->setGeometry(QRect(770, 250, 171, 91));
        Btn_disconnect->setFont(font4);
        Btn_disconnect->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        Btn_download = new QPushButton(centralWidget);
        Btn_download->setObjectName(QString::fromUtf8("Btn_download"));
        Btn_download->setGeometry(QRect(460, 360, 180, 30));
        Btn_download->setFont(font4);
        Btn_download->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        label_ftp_2 = new QLabel(centralWidget);
        label_ftp_2->setObjectName(QString::fromUtf8("label_ftp_2"));
        label_ftp_2->setGeometry(QRect(170, 300, 171, 61));
        label_ftp_2->setFont(font);
        label_ftp_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        label_ftp_2->setFrameShape(QFrame::NoFrame);
        label_ftp_2->setFrameShadow(QFrame::Raised);
        label_ftp_2->setMidLineWidth(1);
        label_ftp_3 = new QLabel(centralWidget);
        label_ftp_3->setObjectName(QString::fromUtf8("label_ftp_3"));
        label_ftp_3->setGeometry(QRect(460, 300, 171, 61));
        label_ftp_3->setFont(font);
        label_ftp_3->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        label_ftp_3->setFrameShape(QFrame::NoFrame);
        label_ftp_3->setFrameShadow(QFrame::Raised);
        label_ftp_3->setMidLineWidth(1);
        Btn_download_2 = new QPushButton(centralWidget);
        Btn_download_2->setObjectName(QString::fromUtf8("Btn_download_2"));
        Btn_download_2->setGeometry(QRect(460, 400, 180, 30));
        Btn_download_2->setFont(font4);
        Btn_download_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        Btn_download_3 = new QPushButton(centralWidget);
        Btn_download_3->setObjectName(QString::fromUtf8("Btn_download_3"));
        Btn_download_3->setGeometry(QRect(460, 440, 180, 30));
        Btn_download_3->setFont(font4);
        Btn_download_3->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        Btn_clear = new QPushButton(centralWidget);
        Btn_clear->setObjectName(QString::fromUtf8("Btn_clear"));
        Btn_clear->setGeometry(QRect(450, 230, 201, 61));
        Btn_clear->setFont(font4);
        Btn_clear->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        Btn_clear_2 = new QPushButton(centralWidget);
        Btn_clear_2->setObjectName(QString::fromUtf8("Btn_clear_2"));
        Btn_clear_2->setGeometry(QRect(180, 230, 141, 61));
        Btn_clear_2->setFont(font4);
        Btn_clear_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        Btn_server_dir = new QPushButton(centralWidget);
        Btn_server_dir->setObjectName(QString::fromUtf8("Btn_server_dir"));
        Btn_server_dir->setGeometry(QRect(180, 150, 141, 61));
        Btn_server_dir->setFont(font4);
        Btn_server_dir->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        Brn_client_receive = new QPushButton(centralWidget);
        Brn_client_receive->setObjectName(QString::fromUtf8("Brn_client_receive"));
        Brn_client_receive->setGeometry(QRect(550, 150, 191, 61));
        Brn_client_receive->setFont(font4);
        Brn_client_receive->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        Btn_client_send = new QPushButton(centralWidget);
        Btn_client_send->setObjectName(QString::fromUtf8("Btn_client_send"));
        Btn_client_send->setGeometry(QRect(390, 150, 161, 61));
        Btn_client_send->setFont(font4);
        Btn_client_send->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 964, 26));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FTP_CLIENT", nullptr));
#ifndef QT_NO_TOOLTIP
        label_ftp->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_ftp->setText(QApplication::translate("MainWindow", "FTP server address:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_ftp->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        lineEdit_ftp->setText(QApplication::translate("MainWindow", "ftp://127.0.0.1", nullptr));
#ifndef QT_NO_TOOLTIP
        label_user->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_user->setText(QApplication::translate("MainWindow", "Username", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_user->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        lineEdit_user->setText(QApplication::translate("MainWindow", "luka", nullptr));
#ifndef QT_NO_TOOLTIP
        label_password->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_password->setText(QApplication::translate("MainWindow", "Password", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_password->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        lineEdit_password->setText(QApplication::translate("MainWindow", "rtrk", nullptr));
        Btn_upload->setText(QApplication::translate("MainWindow", "UPLOAD", nullptr));
#ifndef QT_NO_TOOLTIP
        creator->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        creator->setText(QApplication::translate("MainWindow", "Luka Karan", nullptr));
#ifndef QT_NO_TOOLTIP
        index->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        index->setText(QApplication::translate("MainWindow", "RA50/2016", nullptr));
#ifndef QT_NO_TOOLTIP
        projectname->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        projectname->setText(QApplication::translate("MainWindow", "QT Framework \342\200\223 FTP CLIENT", nullptr));
        Btn_disconnect->setText(QApplication::translate("MainWindow", "QUIT", nullptr));
        Btn_download->setText(QApplication::translate("MainWindow", "DOWNLOAD MP3", nullptr));
#ifndef QT_NO_TOOLTIP
        label_ftp_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_ftp_2->setText(QApplication::translate("MainWindow", "UPLOAD FILE  FROM \n"
"CLIENT TO SERVER", nullptr));
#ifndef QT_NO_TOOLTIP
        label_ftp_3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_ftp_3->setText(QApplication::translate("MainWindow", "DOWNLOAD FILE FROM \n"
" SERVER TO CLIENT", nullptr));
        Btn_download_2->setText(QApplication::translate("MainWindow", "DOWNLOAD TXT", nullptr));
        Btn_download_3->setText(QApplication::translate("MainWindow", "DOWNLOAD JPG", nullptr));
        Btn_clear->setText(QApplication::translate("MainWindow", "CLEAR CLIENT\n"
" RECEIVE DIRECTORY", nullptr));
        Btn_clear_2->setText(QApplication::translate("MainWindow", "CLEAR SERVER\n"
"DIRECTORY", nullptr));
        Btn_server_dir->setText(QApplication::translate("MainWindow", "VIEW SERVER\n"
"DIRECTORY", nullptr));
        Brn_client_receive->setText(QApplication::translate("MainWindow", "VIEW CLIENT\n"
" RECEIVE DIRECTORY", nullptr));
        Btn_client_send->setText(QApplication::translate("MainWindow", "VIEW CLIENT\n"
" SEND DIRECTORY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
