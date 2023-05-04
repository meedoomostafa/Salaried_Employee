#include "Department.h"

Department::Department()
{
    //ctor
}

Department::~Department()
{
    //dtor
}
void Department::setdepart()
{
    cout<<" enter department id : ";cin>>departid;
    cout<<" enter department name : ";cin>>departname;
}
void Department::displaydepart()
{
    cout<<" department id : "<<departid<<endl;
    cout<<" department name : "<<departname<<endl;
}
