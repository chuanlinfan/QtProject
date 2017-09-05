#include "hongduedu.h"
#include "student.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HongDuEdu w;
    w.show();
    Student s("chuanlin", "18657152973", 6);

    s.addClassforStudent("math", 20);
    s.getInfo();
    s.onClass("chuanlin", 5);
    s.getInfo();

    return a.exec();
}
