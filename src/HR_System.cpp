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
            cout<<"|[5] exist               |"<<endl;
            cout<<"|------------------------|"<<endl<<endl;
            int x;
            for(int j=0;j<4;j++)
            {
                cout<<" what is number that you want to calculate his salary ? : ";cin>>x;
                cout<<endl;
                if(x==1)
                {
                    if(H[i].getsalary()==0)
                    {
                        cout<<" you don't enter any information about this employee "<<endl;
                        break;
                    }
                    else
                    {
                        cout<<" the salary of hourly employee number"<<"["<<i+1<<"] : "<<H[i].getsalary()<<endl;
                    }
                }
                else if(x==2)
                {
                    if(S[i].getsalary()==0)
                    {
                        cout<<" you don't enter any information about this employee "<<endl;
                        break;
                    }
                    else
                    {
                        cout<<" the salary of salaried employee number"<<"["<<i+1<<"] : "<<S[i].getsalary()<<endl;
                    }
                }
                else if(x==3)
                {
                    if(M[i].getsalary()==0)
                    {
                        cout<<" you don't enter any information about this employee "<<endl;
                        break;
                    }
                    else
                    {
                        cout<<" the salary of manager employee number"<<"["<<i+1<<"] : "<<M[i].getsalary()<<endl;
                    }
                }
                else if(x==4)
                {
                    if(C[i].getsalary()==0)
                    {
                        cout<<" you don't enter any information about this employee "<<endl;
                        break;
                    }
                    else
                    {
                        cout<<" the salary of commission employee number"<<"["<<i+1<<"] : "<<C[i].getsalary()<<endl;
                    }
                }
                else
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
            H[counter_h].setdetailes();
            counter_h++;
            break;
        case 2:
            S[counter_s].setdetailes();
            counter_s++;
            break;
        case 3:
            M[counter_m].setdetailes();
            counter_m++;
            break;
        case 4:
            C[counter_c].setdetailes();
            counter_c++;
            break;
        default:
            cout<<" please enter number from the list "<<endl;
            break;
        }
        counter=counter_h+counter_s+counter_m+counter_c;


        cout<<"------------------------------------------"<<endl;
        cout<<" you want to enter another employee ? (y/n) "<<endl;
        cout<<"------------------------------------------"<<endl;
        cin>>k;
        system("cls");
        cout<<endl<<endl;

    }while(k!='n' && k!='N');
}
void HR_System::editemployee()
{
    int p;
    cout<<endl;
    cout<<" enter the number of employee that you want to edit his information : ";cin>>p;
    cout<<endl;
    int n;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"( 1- hourly  2-salaried  3-manager  4-commission )"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<" your choise ?? : ";cin>>n;
    if(n==1 && p-1<=counter_h)
    {
        H[p-1].setdetailes();
        cout<<endl;
        char x;
        cout<<" you want to add hours ??(y/n) : ";cin>>x;
        if(x!='n' && x!='N')
        {
            int h;
            cout<<" enter hours : ";cin>>h;
            H[p-1].addhours(h);
        }
    }
    else if(n==2 && p-1<=counter_s)
    {
        S[p-1].setdetailes();
    }
    else if(n==3 && p-1<=counter_m)
    {
        M[p-1].setdetailes();
        cout<<endl;
        char x;
        cout<<" you want to add hours ??(y/n) : ";cin>>x;
        if(x!='n' && x!='N')
        {
            int b;
            cout<<" enter bouns : ";cin>>b;
            M[p-1].addbouns(b);
        }
    }
    else if(n==4 && p-1<=counter_c)
    {
        C[p-1].setdetailes();
    }
    else
    {
        cout<<" out of list "<<endl;
    }

}
void HR_System::delete_employee()
{
    int del;
    cout<<endl;
    cout<<" enter the number of employee that you want to delete him : ";cin>>del;
    cout<<endl;
        int n;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"( 1- hourly  2-salaried  3-manager  4-commission )"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<" your choise ?? : ";cin>>n;

        if(n==1)
        {
            for(int i=del-1;i<counter_h;i++)
                {
                    H[i]=H[i+1];
                }
                counter_h--;
        }
        else if(n==2)
        {
            for(int i=del-1;i<counter_s;i++)
                {
                    S[i]=S[i+1];
                }
                counter_s--;
        }
        else if(n==3)
        {
            for(int i=del-1;i<counter_m;i++)
                {
                    M[i]=M[i+1];
                }
                counter_m--;
        }
        else if(n==4)
        {
            for(int i=del-1;i<counter_c;i++)
            {
                C[i]=C[i+1];
            }
            counter_c--;
        }
        cout<<endl;
        cout<<setw(50)<<" deleted successfuly "<<endl;


}
void HR_System::findemployee()
{
    int x;
    cout<<" search by >>( 1- phone  2- id )<< "<<endl;
    cout<<" your choise : ";cin>>x;
    if(x==1)
    {
        string n;
        cout<<" enter the number : ";cin>>n;
        cout<<endl;
        for(int i=0;i<=counter;i++)
        {
            if( H[i].findphone()==n)
                H[i].displaydata();
            else if( S[i].findphone()==n )
                S[i].displaydata();
            else if( M[i].findphone()==n )
                M[i].displaydata();
            else if( C[i].findphone()==n )
                C[i].displaydata();
        }
    }
    else if(x==2)
    {
        int n;
        cout<<" enter the id : ";cin>>n;
        cout<<endl;
        for(int i=0;i<=counter;i++)
        {
            if( H[i].findid()==n )
                H[i].displaydata();
            else if( S[i].findid()==n )
                S[i].displaydata();
            else if( M[i].findid()==n )
                M[i].displaydata();
            else if( C[i].findid()==n )
                C[i].displaydata();
        }
    }
    else
        cout<<" Not Founded "<<endl;
}
void HR_System::showall()
{
    int n;
    cout<<endl;
    cout<<" you want to show >>( 1- hourly  2- salaried  3- manager  4-commission )<<  "<<endl<<endl;
    cout<<" your choise : ";cin>>n;
    if(n==1)
    {
        for(int i=0;i<=counter_h;i++)
        {
            H[i].displaydata();
            HB[i].displaybenefit();
            DB[i].displaybenefit();
            cout<<endl;
        }
    }
    else if(n==2)
    {
        for(int i=0;i<=counter_s;i++)
        {
            S[i].displaydata();
            HB[i].displaybenefit();
            DB[i].displaybenefit();
            cout<<endl;
        }
    }
    else if(n==3)
    {
        for(int i=0;i<=counter_m;i++)
        {
            M[i].displaydata();
            HB[i].displaybenefit();
            DB[i].displaybenefit();
            cout<<endl;
        }
    }
    else if(n==4)
    {
        for(int i=0;i<=counter_c;i++)
        {
            C[i].displaydata();
            HB[i].displaybenefit();
            DB[i].displaybenefit();
            cout<<endl;
        }
    }
    else
        cout<<" :((ERROR)): "<<endl;
}
