#include "student.h"

Student::Student()
{

}

Student::Student(string name, string phoneNum, uint32 grade)
{
    m_student.name = name;
    m_student.phoneNum = phoneNum;
    m_student.grade = grade;
}

uint8 Student::addClassforStudent(string cName, uint8 cTimes)
{
    m_class.className = cName;
    m_class.classTimes = cTimes;

    return LRet_success;
}

uint8 Student::delClassforStudent(string cName)
{
    uint32 ret = LRet_success;

    if(cName.compare(m_class.className))
    {
        m_class.classTimes = 0;
        ret = LRet_success;
    }
    else
    {
        ret = LRet_failed;
    }

    return ret;
}

uint8 Student::onClass(string cName, uint8 times)
{
    uint32 ret = LRet_success;

    if(cName.compare(m_class.className))
    {
        m_class.classTimes -= times;
        ret = LRet_success;
    }
    else
    {
        ret = LRet_failed;
    }

    return ret;
}

void Student::getInfo()
{
    cout<<"Student Information:"<<endl;
    cout<<"Name:"<<m_student.name<<endl;
    cout<<"PhoneNum:"<<m_student.phoneNum<<endl;
    cout<<"Grade:"<<m_student.grade<<endl;

    cout<<"Class Information:"<<endl;
    cout<<m_class.className<<endl;
    cout<<m_class.classTimes<<endl;
}
