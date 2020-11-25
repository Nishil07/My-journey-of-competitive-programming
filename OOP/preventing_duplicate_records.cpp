/* Question: Create a class that registers your details by taking reg.no, name, and age and mail id.
Create a function that prevents duplicate entries of objects based on reg.no.*/

// Solution: 

#include<iostream>
using namespace std;

class records{
    public:
        int reg_no[100],age[100],x=-1;
        string name[100],email_id[100];

    void information()
    {
        cout<<"Enter your name:";
        cin>>name[x];
        cout<<"Enter your age:";
        cin>>age[x];
        cout<<"Enter your reg_no:";
        cin>>reg_no[x];
        cout<<"Enter your email_id:";
        cin>>email_id[x];
        for(int i=0;i<x;i++)
        {
            if(reg_no[x]==reg_no[i])
            {
                x--;
                cout<<"Duplicate entry is not allowed"<<"\n";
            }
        }
    }

    void display_records()
    {
        for(int j=0;j<x+1;j++)
        {
            cout<<"Record "<<j+1<<"\n";
            cout<<"Name:"<<name[j]<<"\n";
            cout<<"Age:"<<age[j]<<"\n";
            cout<<"Reg_no:"<<reg_no[j]<<"\n";
            cout<<"email:"<<email_id[j]<<"\n";
            cout<<"\n";
        }
    }

};

int main()
{
    records obj1;
    int o=0;
    while(o<3)
    {
        cout<<"What do you wish to do: \n 1.Enter Records \n 2.Display all records \n 3.Exit \n";
        cin>>o;
        switch(o){
            case 1: obj1.x++; 
                    obj1.information();
                    break;
            case 2: obj1.display_records();
                    break;
    }
    }
}
