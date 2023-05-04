#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee()
{
    //ctor
}

HourlyEmployee::~HourlyEmployee()
{
    //dtor
}
void HourlyEmployee::setdetailes()
{
    cout<<" enter rate : ";cin>>rate;
    cout<<" enter hours : ";cin>>hours;
    Employee::setdata();

}
double HourlyEmployee::getsalary()
{
    salary=rate*hours;
    return salary;
}
void HourlyEmployee::addhours(double morehours)
{
     hours+=morehours;
}
