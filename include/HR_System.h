#ifndef HR_SYSTEM_H
#define HR_SYSTEM_H
#include<iostream>
#include<string>
#include<iomanip>
#include<unistd.h>
#include<windows.h>
#include"SalariedEmployee.h"
#include"HourlyEmployee.h"
#include"ManagerEmployee.h"
#include"CommissionEmployee.h"
#include"Employee.h"
using namespace std;

class HR_System
{
    public:
        HR_System();
        virtual ~HR_System();
        void calcpayroll();
        void addemployee();
        void editemployee();
        void delete_employee();
        void findemployee();
        void showall();

    protected:
        HourlyEmployee *H= new HourlyEmployee[100];
        SalariedEmployee *S= new SalariedEmployee[100];
        ManagerEmployee *M= new ManagerEmployee[100];
        CommissionEmployee *C= new CommissionEmployee[100];
        Employee *E= new Employee[100];

    private:
        int counter=0;

};

#endif // HR_SYSTEM_H
