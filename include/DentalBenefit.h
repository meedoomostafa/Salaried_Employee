#ifndef DENTALBENEFIT_H
#define DENTALBENEFIT_H
#include<iostream>
#include<string>
#include"Benefit.h"
using namespace std;


class DentalBenefit : public Benefit
{
    public:
        DentalBenefit();
        virtual ~DentalBenefit();
        double calculatebenefit();
        void getdetails();
        void displaybenefit();

    protected:

    private:
};

#endif // DENTALBENEFIT_H
