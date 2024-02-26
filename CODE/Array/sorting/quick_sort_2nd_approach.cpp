#include<iostream>
using namespace std;

void quickSort(int *arr , int s,int e)
{
    //bc
    if(s>=e)
    {
        return;
    }

    int pivotindex = e;
    int i = s-1;
    int j = s;

    while(j<pivotindex)
    {
        if(arr[j]<arr[pivotindex]){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }

    i++;
    swap(arr[i],arr[pivotindex]);

    quickSort(arr,s,i-1);
    quickSort(arr,i+1,e);

}

int main()
{
    int n = 6;
    int arr[n] = {4,2,5,1,8,6};

    int s = 0;
    int e = n-1;

    quickSort(arr,s,e);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;


    return 0;
}