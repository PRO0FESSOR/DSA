#include<iostream>
using namespace std;

void reversearray(int arr[], int size)
{
    for(int i=0;i<size/2;i++)
    {
        arr[i] = arr[i] + arr[size-1-i];
        arr[size-1-i] = arr[i] - arr[size-1-i];
        arr[i] = arr[i] - arr[size-1-i];
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n = 10;
    int arr[n]={1,2,3,4,5,6,7,8,9,10};

    // printarray

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    reversearray(arr,n);

    return 0;
}