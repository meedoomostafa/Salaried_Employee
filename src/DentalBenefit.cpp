#include"DentalBenefit.h"


double DentalBenefit::calculatebenefit()
{
    benefit=0.1*amount;
    return benefit;
}
void DentalBenefit::displaybenefit()
{
    cout<<" Dental benefit : "<<calculatebenefit()<<endl;
}
void DentalBenefit::setamount(double amount)
{
    this->amount=amount;
}
