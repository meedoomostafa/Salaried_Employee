#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include<iostream>
#include<string>
#include"Employee.h"
using namespace std;


class SalariedEmployee : public Employee
{
    public:
        SalariedEmployee();
        virtual ~SalariedEmployee();
        void setdetailes();
        double getsalary();


    protected:

    private:
        double Salary;
};

#endif // SALARIEDEMPLOYEE_H
