#include<iostream>
using namespace std;

void reversexor(int arr[],int size)
{
    int start = 0;
    int end = size-1;

    while(start<end)
    {
        arr[start] = arr[start]^arr[end];
        arr[end] = arr[start]^arr[end]; 
        arr[start]=arr[start]^arr[end];

        start++;
        end--;
    }

}

int main()
{
    int n=10;
    int arr[n]={1,2,3,4,5,6,7,8,9,10};

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reversexor(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}