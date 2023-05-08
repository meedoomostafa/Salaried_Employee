#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee()
{
    //ctor
}

CommissionEmployee::~CommissionEmployee()
{
    //dtor
}
void CommissionEmployee::setdetailes()
{
    cout<<" enter rate : ";cin>>rate;
    cout<<" enter target : ";cin>>target;
    Employee::setdata();
}
double CommissionEmployee::getsalary()
{
    salary=rate*target;
    return salary;
}
void CommissionEmployee::displaydata()
{
    Employee::displaydata();
    cout<<" rate is : "<<rate<<endl;
    cout<<" target is : "<<target<<endl;
}
