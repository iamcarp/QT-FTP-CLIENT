#ifndef DOWNLOAD_H
#define DOWNLOAD_H
#include "mainwindow.h"


//download

//pisanje fajlova za vreme DOWNLOADA
void MainWindow::readContent()
{
    file->write(reply->readAll());
}


//DOWNLOAD file
void MainWindow::on_Btn_download_clicked()
{
    if (initFTP())
    {
        QString folderPath;
        folderPath = QFileDialog::getExistingDirectory(this, tr("Select the file"), "C:/Users/Luka/Desktop/FTP_CLIENT/FTP_CLIENT/CLIENT_FILES/RECEIVE", QFileDialog::ShowDirsOnly);
        file = new QFile(folderPath + "/music.mp3");
        file->open(QIODevice::WriteOnly);

        //preuzmi fajl sa servera u izabrani folder
        QNetworkAccessManager *accessManager = new QNetworkAccessManager(this);
        accessManager->setNetworkAccessible(QNetworkAccessManager::Accessible);
        QUrl url("ftp://127.0.0.1/pesma.mp3");
        url.setPort(21);
        url.setUserName(user);
        url.setPassword(password);

        QNetworkRequest request(url);
        reply = accessManager->get(request);

        connect((QObject *)reply, SIGNAL(readyRead()), this, SLOT(readContent()));
        connect(accessManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
        connect(reply, SIGNAL(downloadProgress(qint64 ,qint64)), this, SLOT(loadProgress(qint64 ,qint64)));
        connect(reply, SIGNAL(error(QNetworkReply::NetworkError)),SLOT(replyError(QNetworkReply::NetworkError)));
    }
}

void MainWindow::on_Btn_download_2_clicked()
{
    if (initFTP()) {
        QString folderPath;
        folderPath = QFileDialog::getExistingDirectory(this, tr("Select the file"), "C:/Users/Luka/Desktop/FTP_CLIENT/FTP_CLIENT/CLIENT_FILES/RECEIVE", QFileDialog::ShowDirsOnly);
        file = new QFile(folderPath + "/text.txt");
        file->open(QIODevice::WriteOnly);

        //preuzmi fajl sa servera u izabrani folder
        QNetworkAccessManager *accessManager = new QNetworkAccessManager(this);
        accessManager->setNetworkAccessible(QNetworkAccessManager::Accessible);
        QUrl url("ftp://127.0.0.1/test.txt");
        url.setPort(21);
        url.setUserName(user);
        url.setPassword(password);

        QNetworkRequest request(url);
        reply = accessManager->get(request);

        connect((QObject *)reply, SIGNAL(readyRead()), this, SLOT(readContent()));
        connect(accessManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
        connect(reply, SIGNAL(downloadProgress(qint64 ,qint64)), this, SLOT(loadProgress(qint64 ,qint64)));
        connect(reply, SIGNAL(error(QNetworkReply::NetworkError)),SLOT(replyError(QNetworkReply::NetworkError)));
    }
}
void MainWindow::on_Btn_download_3_clicked()
{
    if (initFTP()) {
        QString folderPath;
        folderPath = QFileDialog::getExistingDirectory(this, tr("Select the file"), "C:/Users/Luka/Desktop/FTP_CLIENT/FTP_CLIENT/CLIENT_FILES/RECEIVE", QFileDialog::ShowDirsOnly);
        file = new QFile(folderPath + "/image.jpg");
        file->open(QIODevice::WriteOnly);

        //preuzmi fajl sa servera u izabrani folder
        QNetworkAccessManager *accessManager = new QNetworkAccessManager(this);
        accessManager->setNetworkAccessible(QNetworkAccessManager::Accessible);
        QUrl url("ftp://127.0.0.1/slika.jpg");
        url.setPort(21);
        url.setUserName(user);
        url.setPassword(password);

        QNetworkRequest request(url);
        reply = accessManager->get(request);

        connect((QObject *)reply, SIGNAL(readyRead()), this, SLOT(readContent()));
        connect(accessManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
        connect(reply, SIGNAL(downloadProgress(qint64 ,qint64)), this, SLOT(loadProgress(qint64 ,qint64)));
        connect(reply, SIGNAL(error(QNetworkReply::NetworkError)),SLOT(replyError(QNetworkReply::NetworkError)));
    }
}


#endif // DOWNLOAD_H
