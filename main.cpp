#include "ezegpa.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ezegpa w;
    w.show();
    return a.exec();
}
