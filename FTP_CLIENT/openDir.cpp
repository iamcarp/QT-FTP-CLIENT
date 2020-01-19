
#include "mainwindow.h"

void MainWindow::on_Btn_server_dir_clicked(){
   if (initFTP())  QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Open File"), "../FTP_SERVER/SERVER_FILES/SEND");
}
void MainWindow::on_Btn_server_dir_2_clicked(){
   if (initFTP())  QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Open File"), "../FTP_SERVER/SERVER_FILES");
}
void MainWindow::on_Btn_client_send_clicked(){
   if (initFTP())  QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Open File"),"../FTP_CLIENT/CLIENT_FILES/SEND/");
}
void MainWindow::on_Brn_client_receive_clicked(){
   if (initFTP())   QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Open File"),"../FTP_CLIENT/CLIENT_FILES/RECEIVE/");
}
