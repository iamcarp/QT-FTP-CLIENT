
#include "mainwindow.h"

QString MainWindow::getFileName(QString m_filePath)
{
    QString temp;
    QString fileName;
    int count = -1;
    fileName = m_filePath;
    for(int i = 0; temp != "/"; i++)
    {
        temp = fileName.right(1);
        fileName.chop(1);
        count++;
    }
    fileName = m_filePath.right(count);

    return fileName;
}



//upload files
void MainWindow::on_Btn_upload_clicked()
{
    if (initFTP())
        {
            //nabaviti putanju i sacuvati je u nizu
            QStringList string_list;
            string_list = QFileDialog::getOpenFileNames(this, tr("Select the file"), "C:/Users/Luka/Desktop/FTP_CLIENT/FTP_CLIENT/CLIENT_FILES/SEND", tr("Files (*)"));
            if (!string_list.isEmpty())
                {
                        for (int i = 0; i < string_list.count(); i++)
                        {
                            QString filePath;
                            QString fileName;
                            QString m_ftpPath;

                            filePath = string_list.at(i);

                            file = new QFile(filePath);
                            file->open(QIODevice::ReadOnly);
                            QByteArray byte_file = file->readAll();

                            fileName = getFileName(filePath);

                            //upload na server
                            accessManager = new QNetworkAccessManager(this);
                            accessManager->setNetworkAccessible(QNetworkAccessManager::Accessible);
                            m_ftpPath = ftpPath + "/" + fileName;
                            QUrl url(m_ftpPath);
                            url.setPort(21);
                            url.setUserName(user);
                            url.setPassword(password);

                            QNetworkRequest request(url);
                            reply = accessManager->put(request, byte_file);
                            //static QMetaObject::Connection connect(const QObject *sender, const QMetaMethod &signal,
                            //const QObject *receiver, const QMetaMethod &method,
                            //QNetworkAccessManager klasa koja omogucava aplikaciji da salje network requests i prima odgovore
                            connect(accessManager,SIGNAL(finished(QNetworkReply*)),this,SLOT(replyFinished(QNetworkReply*)));
                           //QNetworkReply klasa sadrzi odgovore na  QNetworkAccessManager klasu
                            connect(reply, SIGNAL(uploadProgress(qint64 ,qint64)), this, SLOT(loadProgress(qint64 ,qint64)));
                       }
                         QMessageBox::information(NULL, tr(""), "UPLOAD IS DONE");
                }
            else
            {
                QMessageBox::critical(NULL, tr(""), "UPLOAD IS CANCELED");
            }
        }
}
