#ifndef HEALTHBENEFIT_H
#define HEALTHBENEFIT_H
#include<iostream>
#include<string>
#include"Benefit.h"
using namespace std;


class HealthBenefit : public Benefit
{
    public:
        HealthBenefit();
        virtual ~HealthBenefit();
        double calculatebenefit();
        void getdetails();
        void displaybenefit();
        double findamount();
    protected:

    private:
};

#endif // HEALTHBENEFIT_H
