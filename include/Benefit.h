#ifndef BENEFIT_H
#define BENEFIT_H

#include<iostream>
#include<string>
using namespace std;

class Benefit
{
    public:
        Benefit();
        virtual ~Benefit();
        virtual double calculatebenefit()=0;
        virtual void displaybenefit()=0;

        string plantype;
        double amount;
        double benefit;


};

#endif // BENEFIT_H
