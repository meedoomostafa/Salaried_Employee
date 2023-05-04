#include <iostream>
#include<string>
#include<iomanip>
#include<unistd.h>
#include<windows.h>
#include"HR_System.h"
using namespace std;

int main()
{
    char k;
    do
    {
        cout<<"|-----------------------|"<<endl;
        cout<<"|[1] calculate salary   |"<<endl;
        cout<<"|[2] add employee       |"<<endl;
        cout<<"|[3] edit employee      |"<<endl;
        cout<<"|[4] delete employee    |"<<endl;
        cout<<"|[5] find employee      |"<<endl;
        cout<<"|[6] show all employee  |"<<endl;
        cout<<"|[7] exsit              |"<<endl;
        cout<<"|-----------------------|"<<endl<<endl;
        int n;
        cout<<" enter your choise : "; cin>>n;
        HR_System h;
        switch(n)
        {
        case 1:
            h.calcpayroll();
            break;
        case 2:
            h.addemployee();
            break;
        }
        sleep(5);
        system("cls");

        cout<<"-------------------------------------------"<<endl;
        cout<<" you want to enter another progress ? (y/n) "<<endl;
        cout<<"-------------------------------------------"<<endl;
        cin>>k;
        sleep(1);
        system("cls");
    }while(k!='n' && k!='N');
    return 0;
}
