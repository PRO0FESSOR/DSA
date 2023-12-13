#include<iostream>
using namespace std;

void sort(int a[],int n)
{
    int low=0;
    int high=n-1;

    while(low<high)
    {
        if(a[low]<0) low++;
        else if(a[high]>0) high--;
        else {
            swap(a[low],a[high]);
        }
    }
}

int main()
{
    int n=5;
    int a[n] = {-5,2,-6,7,3};

    sort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}