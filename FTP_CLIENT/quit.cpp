#include "mainwindow.h"



void MainWindow::on_Btn_disconnect_clicked()
{
    QMessageBox::StandardButton reply;
       reply = QMessageBox::question(this, tr(""),"REALLY WANT TO QUIT?", QMessageBox::Yes | QMessageBox::No );

       if (reply == QMessageBox::Yes)
       {
            exit (EXIT_SUCCESS);
       }
  }
