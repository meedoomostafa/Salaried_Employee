#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include<iostream>
#include<string>
using namespace std;

class Department
{
    public:
        Department();
        virtual ~Department();
        void displaydepart();
        void setdepart();


    protected:

    private:
        int departid;
        string departname;
};

#endif // DEPARTMENT_H
