#include "HR_System.h"

HR_System::HR_System()
{

}
HR_System::~HR_System()
{
    //dtor
}
void HR_System::calcpayroll()
{
    char k;
    for (int i=0;i<=counter;i++)
    {
        cout<<endl<<endl;
        cout<<" do you add "<<i+1<<" employee ? (y/n) : ";cin>>k;
        cout<<endl;
        if(k=='n'|| k=='N')
        {
            cout<<setw(50)<<"---------------------------------"<<endl;
            cout<<setw(50)<<" once you should add an employee "<<endl;
            cout<<setw(50)<<"---------------------------------"<<endl;
            sleep(2);
            break;
        }
        else
        {
            cout<<"|------------------------|"<<endl;
            cout<<"|[1] hourly employee     |"<<endl;
            cout<<"|[2] salaried employee   |"<<endl;
            cout<<"|[3] manager employee    |"<<endl;
            cout<<"|[4] commission employee |"<<endl;
            cout<<"|------------------------|"<<endl<<endl;
            int x;
            cout<<" what is number that you want to calculate his salary ? : ";cin>>x;
            switch(x)
            {
            case 1:
                cout<<" the salary of hourly employee number"<<"["<<i+1<<"] : "<<H[i].getsalary()<<endl;
                break;
            case 2:
                cout<<" the salary of salaried employee number"<<"["<<i+1<<"] : "<<S[i].getsalary()<<endl;
                break;
            case 3:
                cout<<" the salary of manager employee number"<<"["<<i+1<<"] : "<<M[i].getsalary()<<endl;
                break;
            case 4:
                cout<<" the salary of commission employee number"<<"["<<i+1<<"] : "<<C[i].getsalary()<<endl;
                break;
            default:
                break;
            }
        }
    }
}
void HR_System::addemployee()
{
    char k;
    do
    {
        cout<<"|------------------------|"<<endl;
        cout<<"|[1] hourly employee     |"<<endl;
        cout<<"|[2] salaried employee   |"<<endl;
        cout<<"|[3] manager employee    |"<<endl;
        cout<<"|[4] commission employee |"<<endl;
        cout<<"|------------------------|"<<endl<<endl;
        int x;
        cout<<" enter your choise : ";cin>>x;
        cout<<endl<<endl;
        switch(x)
        {
        case 1:
            H[counter].setdetailes();
            counter++;
            break;
        case 2:
            S[counter].setdetailes();
            counter++;
            break;
        case 3:
            M[counter].setdetailes();
            counter++;
            break;
        case 4:
            C[counter].setdetailes();
            counter++;
            break;
        default:
            cout<<" please enter number from the list "<<endl;
            break;
        }
        sleep(3);
        system("cls");

        cout<<"------------------------------------------"<<endl;
        cout<<" you want to enter another employee ? (y/n) "<<endl;
        cout<<"------------------------------------------"<<endl;
        cin>>k;
        cout<<endl<<endl;

    }while(k!='n' && k!='N');
}
void HR_System::editemployee()
{

}
void HR_System::delete_employee()
{

}
void HR_System::findemployee()
{

}
void HR_System::showall()
{

}
