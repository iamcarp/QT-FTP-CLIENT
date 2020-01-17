#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication FTPClient(argc, argv);
    MainWindow window;
    window.show();

    return FTPClient.exec();
}
