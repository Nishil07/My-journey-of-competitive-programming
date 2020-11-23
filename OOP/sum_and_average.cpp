#include<iostream>
using namespace std;

class operations{
    public:
    int n,s=0,i,x[10];

    int sum(int x[])
    {
        for(i=0;i<n;i++)
        {
            s=s+x[i];
        }  
        return s;
    }

    float avg()
    {
        return (float)s/n;
    }

};

int main()
{
    int i;
    operations myobj1;
    cout<<"enter length of the array:";
    cin>>myobj1.n;
    cout<<"Enter the array values"<<"\n";
    for(i=0;i<myobj1.n;i++)
        {
            cin>>myobj1.x[i];
        }
    cout<<"the sum is:"<<myobj1.sum(myobj1.x)<<"\n";
    cout<<"the avg is:"<<myobj1.avg();
}