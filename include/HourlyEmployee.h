#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include<iostream>
#include<string>
#include"Employee.h"
using namespace std;


class HourlyEmployee : public Employee
{
    public:
        HourlyEmployee();
        virtual ~HourlyEmployee();
        void setdetailes();
        double getsalary();
        void addhours(double);

    protected:

    private:
        double rate,hours;
};

#endif // HOURLYEMPLOYEE_H
