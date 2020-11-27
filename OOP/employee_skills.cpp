#include<iostream>
using namespace std;

class carpentry{
    public:
        int y;
        string type_of_wood,type_of_creation,tool;

        carpentry()
        {
            y=0;
            type_of_wood="";
            type_of_creation="";
            tool="";
        }
};

class masonry{
    public:
        int years;
        string type;
    masonry()
    {
        type="";
        years=0;
    }
};

class driving{
    public:
        int license_no,y_exp;
        string types_of_vehicles;
    
    driving()
    {
        license_no=0;
        y_exp=0;
        types_of_vehicles="";
    }
};

class employee : public carpentry, public masonry, public driving{
    public:
        int empid,exp,p_no,carp,drive,mason;
        string address;
    
    employee()
    {
       empid=0;
       exp=0;
       p_no=0;
       address=""; 
    }
};

int main()
{
    employee obj[10];
    int o=0,i=0,x,t=0;
    while(o<3)
    {
        cout<<"Enter \n1.Entering details for a new Employee \n2.Display details of an employee \n3.Exit \n";
        cin>>o;
        switch(o){
            case 1: cout<<"Enter your personal details: \n";
                    cout<<"Employee id:";
                    cin>>obj[i].empid;
                    cout<<"Employee experience:";
                    cin>>obj[i].exp;
                    cout<<"Employee PhoneNo:";
                    cin>>obj[i].p_no;
                    cout<<"Employee address:";
                    cin>>obj[i].address;
                    cout<<"Enter 1 if you know carpentry or 0 if you donot know carpentry:";
                    cin>>obj[i].carp;
                    if(obj[i].carp==1)
                    {
                        cout<<"Type of wood:";
                        cin>>obj[i].type_of_wood;
                        cout<<"Experience:";
                        cin>>obj[i].y;
                        cout<<"Type_of_creation:";
                        cin>>obj[i].type_of_creation;
                        cout<<"Tools:";
                        cin>>obj[i].tool;
                    }
                    cout<<"Enter 1 if you know masonry or 0 if you donot know masonry:";
                    cin>>obj[i].mason;
                    if(obj[i].mason==1)
                    {
                        cout<<"Type of Construction:";
                        cin>>obj[i].type;
                        cout<<"Experience:";
                        cin>>obj[i].years;
                    }
                    cout<<"Enter 1 if you know driving or 0 if you donot know driving:";
                    cin>>obj[i].drive;
                    if(obj[i].drive==1)
                    {
                        cout<<"License_no:";
                        cin>>obj[i].license_no;
                        cout<<"Experience:";
                        cin>>obj[i].y_exp;
                        cout<<"Type of vehicle:";
                        cin>>obj[i].types_of_vehicles;
                    }
                    i++;
                    cout<<i<<endl;
                    break;
                case 2: 
                    cout<<"Enter the employee id:";
                    cin>>x;
                    for(int p=0;p<i;i++)
                    {
                        if(x==obj[p].empid)
                        {
                            cout<<"Employee Details \n";
                            cout<<"Employee id:"<<obj[p].empid;
                            cout<<"Employee experience:"<<obj[p].exp;
                            cout<<"Employee PhoneNo:"<<obj[p].p_no;
                            cout<<"Employee address:"<<obj[p].address;
                            if(obj[p].carp==1)
                            {
                                cout<<"Carpentry details \n"<<"\n";
                                cout<<"Type of wood:"<<obj[p].type_of_wood<<"\n";
                                cout<<"Experience:"<<obj[p].y<<"\n";
                                cout<<"Type_of_creation:"<<obj[p].type_of_creation<<"\n";
                                cout<<"Tools:"<<obj[p].tool<<"\n";
                            }
                            if(obj[p].mason==1)
                            {
                                cout<<"Masonry details \n";
                                cout<<"Type of Construction:"<<obj[p].type<<"\n";
                                cout<<"Experience:"<<obj[p].years<<"\n";
                            }
                            if(obj[p].drive==1)
                            {
                                cout<<"Driving detais \n";
                                cout<<"License_no:"<<obj[p].license_no<<"\n";
                                cout<<"Experience:"<<obj[p].y_exp<<"\n";
                                cout<<"Type of vehicle:"<<obj[p].types_of_vehicles<<"\n";
                            }
                            t=1;
                            break;
                        }
                    }
                    if(t==0)
                    {
                        cout<<"Invalid employee id"<<"\n";
                    }
                    break;
        }
    }
}
