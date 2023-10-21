#include<iostream>
using namespace std;

int quotient(int dividend , int divisor)
{
    int s = 0;
    int e = abs(dividend);
    int mid = s+(e-s)/2;
    int ans;

    while(s<=e)
    {
        if(abs(mid*divisor) <= abs(dividend))
        {
            ans = mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }

        mid = s+(e-s)/2;
    }

    if((dividend<0 && divisor<0) || (dividend>0  && divisor>0))
    {
        return ans;
    }
    else{
        return -ans;
    }
}

int main()
{
    int divisor , dividend ;
    cout<<"enter dividend"<<endl;
    cin>>dividend;
    cout<<"enter divisor"<<endl;
    cin>>divisor;

    int ans = quotient(dividend,divisor);

    cout<<"Quotient is-->"<<ans<<endl;
    return 0;
}