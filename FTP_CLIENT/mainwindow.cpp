#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "download.h"
#include "upload.h"
#include "clear.h"

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

/***********************************************************************************************
initFTP
***********************************************************************************************/
bool MainWindow::initFTP()
{

    // static StandardButton critical(QWidget *parent, const QString &title,
    //const QString &text, StandardButtons buttons = Ok,StandardButton defaultButton = NoButton);
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

            return true;
        }
}

/***********************************************************************************************
replyFinished
nema erora:brise, azurira i zatvara
ima erora: ispise ih
***********************************************************************************************/
void MainWindow::replyFinished(QNetworkReply*)
//class Q_NETWORK_EXPORT QNetworkReply: public QIODevice
{
    if (reply->error() == QNetworkReply::NoError)
        {
            reply->deleteLater();                                   //  void deleteLater();
            file->flush();                                          //  bool flush();
            file->close();                                          //  virtual void close() override;
        }
     else
        {
            QMessageBox::critical(NULL, tr("Error"), "ERROR!!!");  //static StandardButton critical(QWidget *parent, const QString &title,const QString &text);
        }
}

/***********************************************************************************************
loadProgress
azuriranje trake
qint64 umesto long long
***********************************************************************************************/
void MainWindow::loadProgress(qint64 bytesSent, qint64 bytesTotal)
{
    ui->progressBar->setMaximum(bytesTotal);
    ui->progressBar->setValue(bytesSent);

    double currentProgress = ((bytesSent)/ (bytesTotal)) * 100.0 ;
    ui->progressBar->setFormat(QString::fromUtf8("%1%").arg(QString::number(currentProgress, 'f', 1)));
    ui->progressBar->clearMask();
}

/***********************************************************************************************
getFileName
preuzmi nazif fajla preko putanje
***********************************************************************************************/
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

/***********************************************************************************************
replyError
***********************************************************************************************/
void MainWindow::replyError()
{
    QString errStr = "error";
    QMessageBox::critical(NULL, tr("Error"), QString(errStr));
}

void MainWindow::on_Btn_disconnect_clicked()
{
    QMessageBox::StandardButton reply;
       reply = QMessageBox::question(this, tr(""),"REALLY WANT TO QUIT?", QMessageBox::Yes | QMessageBox::No );

       if (reply == QMessageBox::Yes)
       {
            exit (EXIT_SUCCESS);
       }
  }


void MainWindow::on_Btn_server_dir_clicked(){
   if (initFTP())  QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Open File"), "C:/Users/Luka/Desktop/FTP_CLIENT/FTP_SERVER/SERVER_FILES");
}
void MainWindow::on_Btn_client_send_clicked(){
   if (initFTP())  QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Open File"),"C:/Users/Luka/Desktop/FTP_CLIENT/FTP_CLIENT/CLIENT_FILES/SEND");
}
void MainWindow::on_Brn_client_receive_clicked(){
   if (initFTP())   QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Open File"),"C:/Users/Luka/Desktop/FTP_CLIENT/FTP_CLIENT/CLIENT_FILES/RECEIVE");
}
