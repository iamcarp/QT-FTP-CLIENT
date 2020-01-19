#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "download.cpp"
#include "upload.cpp"
#include "clear.cpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);                                     // POCETNA VREDNOST
    ui->progressBar->setAlignment(Qt::AlignRight | Qt::AlignVCenter); // PORAVNANJE

}

MainWindow::~MainWindow()
// ui je alociran na heapu pa se mora izbrisati kad se ne koristi
{
    delete ui;
}

/****************************************************************************************/
/****************************************************************************************/
/****************************************************************************************/
bool MainWindow::initFTP()
{

    if (ui->lineEdit_ftp->text().isEmpty())
        {
            QMessageBox::critical(NULL, tr("Error"), "URL address CANNOT BE EMPTY");
            return false;
        }
    else if (ui->lineEdit_user->text().isEmpty())
        {
            QMessageBox::critical(NULL, tr("Error"), "USERNAME CANNOT BE EMPTY");
            return false;
        }
    else if (ui->lineEdit_user->text().isEmpty())
        {
            QMessageBox::critical(NULL, tr("Error"), "PASSWORD CANNOT BE EMPTY");
            return false;
        }

    else
        {
            QUrl url;

            ftpPath  = ui->lineEdit_ftp->text();
            user     = ui->lineEdit_user->text();
            password = ui->lineEdit_password->text();

            if(user!="luka")
                {
                QMessageBox::critical(NULL, tr("Error"), "Wrong username");
                return false;
                }
            else if (password!="rtrk")
                {
                QMessageBox::critical(NULL, tr("Error"), "Wrong password");
                return false;
                }

            url = QUrl(ftpPath);
            if (!url.isValid())
                {
                    QMessageBox::critical(NULL, tr("Error"), "Invalid URL");
                    return false;
                }

            else if (url.scheme() != "ftp")
                {
                    QMessageBox::critical(NULL, tr("Error"), "The URL must start with ftp://");
                    return false;
                }
            else if (ftpPath!="ftp://127.0.0.1"){
                QMessageBox::critical(NULL, tr("Error"), "Invalid URL");
                return false;
            }

            return true;
        }

}
/****************************************************************************************/
/****************************************************************************************/
/****************************************************************************************/
void MainWindow::replyFinished(QNetworkReply*)
//class Q_NETWORK_EXPORT QNetworkReply: public QIODevice
// deo QNetworkAccessManager koji omogucava da apk aslje req i prima poruke
{
    if (reply->error() == QNetworkReply::NoError)
        {
            reply->deleteLater();                                   //  void deleteLater();
            file->flush();                                          //  bool flush();   ispira
            file->close();                                          //  virtual void close() override;
        }
     else
        {
            QMessageBox::critical(NULL, tr("Error"), "ERROR!!!");
        }
}
/****************************************************************************************/
/****************************************************************************************/
/****************************************************************************************/
void MainWindow::loadProgress(qint64 bytesSent, qint64 bytesTotal)
{
    ui->progressBar->setMaximum(bytesTotal);
    ui->progressBar->setValue(bytesSent);

    double currentProgress = ((bytesSent)/ (bytesTotal)) * 100.0 ;
    ui->progressBar->setFormat(QString::fromUtf8("%1%").arg(QString::number(currentProgress, 'f', 1)));
    ui->progressBar->clearMask();
}
/****************************************************************************************/
/****************************************************************************************/
/****************************************************************************************/

void MainWindow::replyError()
{
    QString errStr = "error";
    QMessageBox::critical(NULL, tr("Error"), QString(errStr));
}




