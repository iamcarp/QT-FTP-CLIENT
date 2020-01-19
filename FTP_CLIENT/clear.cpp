
#include "mainwindow.h"



void MainWindow::on_Btn_clear_clicked(  ){
    if (initFTP())
        {
            QString path = "C:/Users/Luka/Desktop/FTP_CLIENT/FTP_CLIENT/CLIENT_FILES/RECEIVE";
            QDir dir(path);
            dir.setNameFilters(QStringList() << "*.*");
            dir.setFilter(QDir::Files);
            foreach(QString dirFile, dir.entryList())
                {
                    dir.remove(dirFile);
                }
        }
    QMessageBox::information(NULL, tr(""), "FOLDER CLIENT RECEIVE IS CLEARED");
}

void MainWindow::on_Btn_clear_2_clicked(  ){
    if (initFTP())
        {
            QString path = "C:/Users/Luka/Desktop/FTP_CLIENT/FTP_SERVER/SERVER_FILES";
            QDir dir(path);
            dir.setNameFilters(QStringList() << "*.*");
            dir.setFilter(QDir::Files);
            foreach(QString dirFile, dir.entryList())
                {
                 dir.remove(dirFile);
                }
        }
     QMessageBox::information(NULL, tr(""), "SERVER FILES ARE CLEARED");
}
