#include"DentalBenefit.h"


double DentalBenefit::calculatebenefit()
{
    benefit=0.1*amount;
    return benefit;
}
void DentalBenefit::getdetails()
{
    cout<<"enter amount : ";cin>>amount;
    cout<<"enter plan type : ";cin>>plantype;
}
void DentalBenefit::displaybenefit()
{
    cout<<" benefit : "<<calculatebenefit()<<endl;
    cout<<" plan type : "<<plantype<<endl;
}
