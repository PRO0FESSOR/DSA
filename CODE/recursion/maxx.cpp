#include<iostream>
using namespace std;

void max(int a[], int n,int i,int& maxi)
{
    if(i>=n)
    {
        return;
    }

    maxi=max(maxi,a[i]);

    max(a,n,i+1,maxi);
}

int main()
{
    int n=5;
    int i=0;
    int a[n]={4,8,6,9,1};

    int maxi = INT16_MIN;

    max(a,n,i,maxi);

    cout<<"max is -->"<<maxi<<endl;

    return 0;
}