#include "hongduedu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HongDuEdu w;
    w.show();

    return a.exec();
}
