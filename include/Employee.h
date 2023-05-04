#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include<string>
#include"Department.h"
using namespace std;

class Employee
{
    public:
        double salary;
        Employee();
        virtual ~Employee();
        void setdata();
        void displaydata();


    protected:
        int employeeid;
        string name,email,phone,jobtitle;
    private:
        Department b;
};

#endif // EMPLOYEE_H
