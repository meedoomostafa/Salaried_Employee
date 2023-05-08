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
        int findphone();
        int findid();
        int employeeid,phone;
        char name[20],email[20],jobtitle[20];

    protected:

    private:
        Department b;
        HealthBenefit h;
        DentalBenefit d;
};

#endif // EMPLOYEE_H
