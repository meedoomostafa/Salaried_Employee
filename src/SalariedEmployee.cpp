#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee()
{
    //ctor
}

SalariedEmployee::~SalariedEmployee()
{
    //dtor
}
void SalariedEmployee::setdetailes()
{
    cout<<"enter salary : ";cin>>Salary;
    Employee::setdata();
}
double SalariedEmployee::getsalary()
{
    Salary=salary;
    return Salary;
}
