#include<iostream>
using namespace std;

int sqrtt(int n)
{
    int s=0;
    int e=n;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e)
    {
        if(mid*mid == n)
        {
            return mid;
        }

        if(mid*mid<n)
        {   
            ans = mid;
            s = mid+1;            
        }
        else{
            e = mid-1;
        }

        mid = s+(e-s)/2;
    }

    return ans;
}

int main()
{
    int n;
    cout<<"enter number -->";
    cin>>n;
    int ans = sqrtt(n);
    cout<<"Answer is -->"<<ans<<endl;

    int precision;
    cout<<"Enter the number of precisions you want with your answer --> ";
    cin>>precision;

    double step = 0.1;
    double finalans = ans;

    for(int i=0;i<precision;i++)
    {
        for(double j=finalans;j*j<=n;j=j+step)
        {
            finalans = j;
        }
        step/=10;
    }

    cout<<"Your final answer is -->"<<finalans<<endl;

    return 0;
}