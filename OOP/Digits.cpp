/* Question: Create a C++ program that finds sum of all the digits of a number or a string up to a single
digit by overloading functions. For strings the ASCII equivalents must be added together up to
single digit and the corresponding digit’s character must be displayed as output. */

//Solution:


#include<iostream>
using namespace std;

class digits{
    public:
        int sum1,r,sum2=0;

    int sum(int a)
    {
        sum1=0;
        r=0;
        if(a<10)
        {
            return a;
        }
        while(a!=0)
        {
            r=a%10;
            sum1+=r;
            a=a/10;
        }
        if(sum1>=10)
        {
            a=sum1;
            sum1=sum(a);
        }
        return sum1;
        
    }

    int sum(string h)
    {
        int i,a=0;
        for(i=0;h[i]!='\0';i++)
        {
            a+=(int)h[i];
        }
        return sum(a);
    }
};

int main()
{
    digits obj;
    int x;
    string y;
    cout<<"Digit:"<<endl;
    cin>>x;
    cout<<"String:"<<endl;
    cin>>y;
    cout<<"The single digit value is:"<<obj.sum(x)<<endl;
    cout<<"The single digit value for the string is:"<<obj.sum(y)<<endl;
}
