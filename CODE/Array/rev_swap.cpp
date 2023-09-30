#include<iostream>
using namespace std;

int main()
{
    int n = 10;
    int arr[n] = {1,2,3,4,5,6,7,8,9,10};

    int start = 0;
    int end = n-1;

    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}