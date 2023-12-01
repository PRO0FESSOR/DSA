#include<iostream>
using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0) return false;
    }

    return true;
}

int count(int n)
{
    int ans=0;

    for(int i=2;i<n;i++)
    {

        if(isPrime(i))
        {
            ans++;
        }
    }

    return ans;
}

int main()
{
    int n;
    cout<<"enter number to find out number of prime numbers --> ";
    cin>>n;

    cout<<"Count of prime numbers are --> "<<count(n)<<endl;   

    return 0;
}