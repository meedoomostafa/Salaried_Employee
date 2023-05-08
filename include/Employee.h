#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include<string>
#include"HealthBenefit.h"
#include"DentalBenefit.h"
#include"Department.h"
using namespace std;

class Employee
{
    public:
        double salary;
        Employee();
        virtual ~Employee();
        void setdata();
        virtual void displaydata();
        string findphone();
        int findid();
        int employeeid;
        string name,email,phone,jobtitle;

    protected:

    private:
        Department b;
        HealthBenefit h;
        DentalBenefit d;
};

#endif // EMPLOYEE_H
