#include "mainwindow.h"

void MainWindow::readContent()
{
    file->write(reply->readAll());
}

/****************************************************************************************/
/****************************************************************************************/
/****************************************************************************************/


void MainWindow::on_Btn_download_clicked()
{
    if (initFTP())
   {
        QString folderPath;

        folderPath = QFileDialog::getExistingDirectory(this, tr("Select the file"), "../FTP_CLIENT/CLIENT_FILES/RECEIVE", QFileDialog::ShowDirsOnly);
        if (!folderPath.isEmpty())
        {
        file = new QFile(folderPath + "/music.mp3");
        file->open(QIODevice::WriteOnly);

        //preuzmi fajl sa servera u izabrani folder
        QNetworkAccessManager *accessManager = new QNetworkAccessManager(this);
        accessManager->setNetworkAccessible(QNetworkAccessManager::Accessible);
        QString m_ftpPath;
        m_ftpPath = ftpPath;
        QUrl url(m_ftpPath+"/SEND/pesma.mp3");
        url.setPort(21);
        url.setUserName(user);
        url.setPassword(password);

        QNetworkRequest request(url);
        reply = accessManager->get(request);

        connect((QObject *)reply, SIGNAL(readyRead()), this, SLOT(readContent()));
        connect(accessManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
        connect(reply, SIGNAL(downloadProgress(qint64 ,qint64)), this, SLOT(loadProgress(qint64 ,qint64)));
        connect(reply, SIGNAL(error(QNetworkReply::NetworkError)),SLOT(replyError(QNetworkReply::NetworkError)));
        QMessageBox::information(NULL, tr(""), "DOWNLOAD IS DONE");
    }
    else
    {
        QMessageBox::critical(NULL, tr(""), "DOWNLOAD IS CANCELLED");
    }
    }
}


/****************************************************************************************/
/****************************************************************************************/
/****************************************************************************************/

void MainWindow::on_Btn_download_2_clicked()
{
    if (initFTP()) {
        QString folderPath;
        folderPath = QFileDialog::getExistingDirectory(this, tr("Select the file"), "../FTP_CLIENT/CLIENT_FILES/RECEIVE", QFileDialog::ShowDirsOnly);
        if (!folderPath.isEmpty())
        {
        file = new QFile(folderPath + "/text.txt");
        file->open(QIODevice::WriteOnly);

        //preuzmi fajl sa servera u izabrani folder
        QNetworkAccessManager *accessManager = new QNetworkAccessManager(this);
        accessManager->setNetworkAccessible(QNetworkAccessManager::Accessible);
        QString m_ftpPath;
        m_ftpPath = ftpPath+"/SEND/";
        QUrl url(m_ftpPath+"test.txt");
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
        else
        {
            QMessageBox::critical(NULL, tr(""), "DOWNLOAD IS CANCELLED");
        }
        }
}

/****************************************************************************************/
/****************************************************************************************/
/****************************************************************************************/

void MainWindow::on_Btn_download_3_clicked()
{
    if (initFTP())
   {

        QString folderPath;

        folderPath = QFileDialog::getExistingDirectory(this, tr("Select the file"), "../FTP_CLIENT/CLIENT_FILES/RECEIVE", QFileDialog::ShowDirsOnly);
        if (!folderPath.isEmpty())
        {
        file = new QFile(folderPath + "/slika.jpg");
        file->open(QIODevice::WriteOnly);

        //preuzmi fajl sa servera u izabrani folder
        QNetworkAccessManager *accessManager = new QNetworkAccessManager(this);
        accessManager->setNetworkAccessible(QNetworkAccessManager::Accessible);
        QString m_ftpPath;
        m_ftpPath = ftpPath;
        QUrl url(m_ftpPath+"/SEND/SDL.jpg");
        url.setPort(21);
        url.setUserName(user);
        url.setPassword(password);

        QNetworkRequest request(url);
        reply = accessManager->get(request);

        connect((QObject *)reply, SIGNAL(readyRead()), this, SLOT(readContent()));
        connect(accessManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
        connect(reply, SIGNAL(downloadProgress(qint64 ,qint64)), this, SLOT(loadProgress(qint64 ,qint64)));
        connect(reply, SIGNAL(error(QNetworkReply::NetworkError)),SLOT(replyError(QNetworkReply::NetworkError)));
        QMessageBox::information(NULL, tr(""), "DOWNLOAD IS DONE");
    }
    else
    {
        QMessageBox::critical(NULL, tr(""), "DOWNLOAD IS CANCELLED");
    }
    }
}
