#include<iostream>
using namespace std;

void print(int arr[],int n,int i)
{
    if(i>=n)
    {
        return ;
    }

    cout<<arr[i]<<" ";

    print(arr,n,i+1);
}

int main()
{
    int n=5;
    int arr[5]={2,3,4,7,6};

    int i=0;

    print(arr,n,i);

    return 0;
}