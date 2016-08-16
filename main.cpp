#include "mainprueba.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainPrueba w;
    w.show();

    return a.exec();
}
