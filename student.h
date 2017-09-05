#ifndef STUDENT_H
#define STUDENT_H

#include "base.h"

enum LRet
{
    LRet_success = 0,
    LRet_failed
};

struct SStudent
{
    string name;
    string phoneNum;
    uint32 grade;
};

struct SClass
{
    string className;
    uint32 classTimes;
};

class Student
{
public:
    Student();
    Student(string name, string phoneNum, uint32 grade);

    uint8 addClassforStudent(string cName, uint8 cTimes);
    uint8 delClassforStudent(string cName);
    uint8 onClass(string cName, uint8 times);

    void getInfo();
private:
    SStudent m_student;
    SClass m_class;
};

#endif // STUDENT_H
