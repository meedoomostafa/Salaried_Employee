#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include<iostream>
#include<string>
#include"Employee.h"
using namespace std;


class CommissionEmployee : public Employee
{
    public:
        CommissionEmployee();
        virtual ~CommissionEmployee();
        void setdetailes();
        double getsalary();
    protected:

    private:
        double target,rate;
};

#endif // COMMISSIONEMPLOYEE_H
