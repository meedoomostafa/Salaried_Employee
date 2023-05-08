#ifndef DENTALBENEFIT_H
#define DENTALBENEFIT_H
#include<iostream>
#include<string>
#include"Benefit.h"
using namespace std;


class DentalBenefit : public Benefit
{
    public:

        double calculatebenefit();
        void displaybenefit();
        void setamount(double);

    protected:

    private:
};

#endif // DENTALBENEFIT_H
