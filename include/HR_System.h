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
#include"DentalBenefit.h"
#include"HealthBenefit.h"
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


    private:
        int counter_h=0,counter_s=0,counter_m=0,counter_c=0;
        int counter=0;
        HourlyEmployee H[10];
        SalariedEmployee S[10];
        ManagerEmployee M[10];
        CommissionEmployee C[10];
        HealthBenefit HB[10];
        DentalBenefit DB[10];

};

#endif // HR_SYSTEM_H
