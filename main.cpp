﻿#include "mainwindow.h"
#include "loaddialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("MarkSentence");
    w.show();

    return a.exec();
}
