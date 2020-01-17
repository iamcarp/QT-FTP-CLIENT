#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QMessageBox>
#include <QFileDialog>
#include <QMetaEnum>
#include <QUrl>
#include <QFile>
#include <QDir>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    bool initFTP();
    void replyFinished(QNetworkReply*);
    void loadProgress(qint64 bytesSent, qint64 bytesTotal);
    QString getFileName(QString m_filePath);
    void replyError();
    void readContent();

private slots:
    void on_Btn_upload_clicked();

    void on_Btn_disconnect_clicked();

    void on_Btn_download_clicked();
    void on_Btn_download_2_clicked();
    void on_Btn_download_3_clicked();

    void on_Btn_clear_clicked();
    void on_Btn_clear_2_clicked();

    void on_Btn_server_dir_clicked();
    void on_Btn_server_dir_2_clicked();
    void on_Btn_client_send_clicked();
    void on_Brn_client_receive_clicked();

private:
    Ui::MainWindow *ui;
    //QNetworkAccessManager klasa koja omogucava aplikaciji da salje network requests i prima odgovore
    QNetworkAccessManager *accessManager;
    //QNetworkReply klasa sadrzi odgovore na  QNetworkAccessManager klasu
    QNetworkReply *reply;
    QString ftpPath;                    //putanja za upload
    QString user;
    QString password;
    QFile *file;
};

#endif // MAINWINDOW_H
