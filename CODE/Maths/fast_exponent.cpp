#include<iostream>
using namespace std;

int exponent(int a,int b)
{
    int ans = 1;

    while(b>0)
    {
        if(b&1)
        {
            ans = ans*a;
        }
        a=a*a;
        b>>=1;
    }

    return ans;
}

int main()
{
    int a,b;

    cout<<"enter two numbers -->";
    cin>>a>>b;

    cout<<"ans is -->"<<exponent(a,b)<<endl;

    return 0;
}