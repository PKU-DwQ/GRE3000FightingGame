
#include "arena.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Arena w;
    w.show();
    return a.exec();
}
