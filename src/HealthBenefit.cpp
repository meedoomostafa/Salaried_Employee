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
    cout<<" enter amount : ";cin>>amount;
    cout<<endl;
}
void HealthBenefit::displaybenefit()
{
    cout<<" health benefit : "<<calculatebenefit()<<endl;
}
double HealthBenefit::findamount()
{
    return amount;
}
