#include<iostream>
using namespace std;

bool sorted(int arr[],int n,int i)
{
    if(i == n-1)
    {
        return true;
    }

    if(arr[i] > arr[i+1]) return false;

    return sorted(arr,n,i+1);

}

int main()
{
    int n = 5;
    int arr[n] = {1,9,3,4,5};
    int i =0;

    bool isSorted = sorted(arr,n,i);

    if(isSorted)
    {
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }

    return 0;
}