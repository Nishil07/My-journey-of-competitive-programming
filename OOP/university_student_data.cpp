#include<iostream>
using namespace std;

class student_personal{
    public:
        int reg_no,p_no;
        string school,branch,address;
};

class student_academics{
    public:
        int reg_no1,semester,backlogs;
        float cgpa;
        string remarks;

};

class communication : public student_personal, public student_academics{
    public:
        int com_id;
        string date,sent_by;

    void display_SP(communication obj[],int i,int p)
        {
                    cout<<"Student Personal Information:"<<"\n";
                    cout<<"Student RegNo:"<<obj[p].reg_no<<"\n";
                    cout<<"Student school:"<<obj[p].school<<"\n";
                    cout<<"Student branch:"<<obj[p].branch<<"\n";
                    cout<<"Student Address:"<<obj[p].address<<"\n";
                    cout<<"Student PhoneNo:"<<obj[p].p_no<<"\n";
        } 

    void display_SA(communication obj[],int i,int p)
        {
                    cout<<"Student Academic Information:"<<"\n";
                    cout<<"Student RegNo:"<<obj[p].reg_no1<<"\n";
                    cout<<"Student semester:"<<obj[p].semester<<"\n";
                    cout<<"Student cgpa:"<<obj[p].cgpa<<"\n";
                    cout<<"Student backlogs:"<<obj[p].backlogs<<"\n";
                    cout<<"Student remarks:"<<obj[p].remarks<<"\n";
        }
    
    void display_COM(communication obj[],int i, int p)
    {
                    cout<<"Student Communication Information:"<<"\n";
                    cout<<"Communication ID:"<<obj[p].com_id<<"\n";
                    cout<<"Date:"<<obj[p].date<<"\n";
                    cout<<"Sent_by:"<<obj[p].sent_by<<"\n";
    }
};

int main()
{
    communication obj[10];

    int o=0,i=-1;
    while(o<3)
    {
        cout<<"Select the type of operation you want to perform: \n1.Enter Student info \n2.Display Student info \n3.Exit \n";
        cin>>o;
        switch(o){
            case 1: i++;
                    cout<<"Enter Student Personal Information"<<"\n";
                    cout<<"Student RegNo:";
                    cin>>obj[i].reg_no;
                    cout<<"Student school:";
                    cin>>obj[i].school;
                    cout<<"Student branch:";
                    cin>>obj[i].branch;
                    cout<<"Student Address:";
                    cin>>obj[i].address;
                    cout<<"Student PhoneNo:";
                    cin>>obj[i].p_no;
                    cout<<"Enter Student Academic Information"<<"\n";
                    cout<<"Student RegNo:";
                    cin>>obj[i].reg_no1;
                    cout<<"Student semester:";
                    cin>>obj[i].semester;
                    cout<<"Student backlogs:";
                    cin>>obj[i].backlogs;
                    cout<<"Student CGPA:";
                    cin>>obj[i].cgpa;
                    cout<<"Student remarks:";
                    cin>>obj[i].remarks;
                    cout<<"Enter student Parent communication"<<"\n";
                    cout<<"Coomunication ID:";
                    cin>>obj[i].com_id;
                    cout<<"Date:";
                    cin>>obj[i].date;
                    cout<<"Sent By:";
                    cin>>obj[i].sent_by;
                    break;
            
            case 2: int h,r;
                    cout<<"Display:\n1.Student Personal Info\n2.Student Academic Info\n3.Student Communication Info\n";
                    cin>>h;
                    cout<<"Enter Communication ID:";
                    cin>>r;
                    for(int p=0;p<i+1;p++)
                    {
                        if(obj[p].com_id==r)
                        {
                            if(h==1)
                            {
                                obj[i].display_SP(obj,i,p);
                            }
                            if(h==2)
                            {
                                obj[i].display_SA(obj,i,p);
                            }
                            if(h==3)
                            {
                                obj[i].display_COM(obj,i,p);
                            }
                        }
                        else
                        {
                            cout<<"The Communication ID doesnot exist!"<<"\n";
                        }
                        
                    }
                    break;
        }
    }
}
