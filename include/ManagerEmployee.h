#ifndef MANAGEREMPLOYEE_H
#define MANAGEREMPLOYEE_H
#include<iostream>
#include<string>
#include"Employee.h"
using namespace std;


class ManagerEmployee : public Employee
{
    public:
        ManagerEmployee();
        virtual ~ManagerEmployee();
        void setdetailes();
        double getsalary();
        void addbouns(double);

    protected:

    private:
        double bouns;
};

#endif // MANAGEREMPLOYEE_H
