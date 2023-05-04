#ifndef HR SYSTEM_H
#define HR SYSTEM_H
#include<iostream>
#include<string>
#include"Employee.h"
using namespace std;


class HR System
{
    public:
        HR System();
        virtual ~HR System();
        void calctotalpayroll();
        void addemployee();
        void delete_employee();
        void editemployee();
        void findemployee();
        void showall();
    protected:

    private:

};

#endif // HR SYSTEM_H
