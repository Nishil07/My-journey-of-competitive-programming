/* Question: Create a class account that maintains acc_no, name, and balance. Perform deposit,
   withdrawal and transaction statement print operations.*/

//Solution:

#include<iostream>
using namespace std;

class account{
    public:
    int acc_no,x=-1,dep_float[100];
    float balance=0,amount[100];
    string name;

    void deposit(float a)
    {
        x++;
        dep_float[x]=1;
        balance+=a;
        cout<<"Amount deposited:"<<a<<"\n";

    }

    void withdrawal(float b)
    {
        if(amount[x]>balance)
            {
                cout<<"Amount cannot be withdrawn"<<"\n";
            }
            else
            {
               x++;
               dep_float[x]=2; 
               cout<<"Amount withdawn:"<<b<<"\n";
               balance-=b; 
            }
    }

    void transaction()
    {
        for(int i=0;i<x+1;i++)
        {
            if(dep_float[i]==1)
            {
                cout<<"Amount deposited:"<<amount[i]<<"\n";
            }
            if(dep_float[i]==2)
            {
                cout<<"Amount withdrawn:"<<amount[i]<<"\n";
            }
        }
    }


};

int main()
{
    int o=0;
    account obj1;
    cout<<"Please enter your account number:"<<"\n";
    cin>>obj1.acc_no;
    cout<<"Please enter your name:"<<"\n";
    cin>>obj1.name;
    if(obj1.x==-1)
    {
        cout<<"Your current account balance is 0."<<"\n";
    }

    while(o<=3)
    {
        cout<<"Choose the operation you wish to perform: \n 0.Deposit \n 1.Withdraw \n 2.Check Balance \n 3.View all transaction statements \n 4.Exit \n";
        cin>>o;
        if(o==0)
        {
            cout<<"Enter the amount you want to deposit:"<<"\n";
            cin>>obj1.amount[obj1.x];
            obj1.deposit(obj1.amount[obj1.x]);
        }
        if(o==1)
        {
            cout<<"Enter the amount you want to withdraw:"<<"\n";
            cin>>obj1.amount[obj1.x];
        }
        if(o==2)
        {
            cout<<"your account balance is:"<<obj1.balance<<"\n";
        }

        if(o==3)
        {
            obj1.transaction();
        }


    }

    

}
