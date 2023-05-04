#include "HealthBenefit.h"

HealthBenefit::HealthBenefit()
{
    //ctor
}

HealthBenefit::~HealthBenefit()
{
    //dtor
}
double HealthBenefit::calculatebenefit()
{
    benefit=0.2*amount;
    return benefit;
}
void HealthBenefit::getdetails()
{
    cout<<"enter amount : ";cin>>amount;
    cout<<"enter plan type : ";cin>>plantype;
}
void HealthBenefit::displaybenefit()
{
    cout<<" benefit : "<<calculatebenefit()<<endl;
    cout<<" plan type : "<<plantype<<endl;
}
