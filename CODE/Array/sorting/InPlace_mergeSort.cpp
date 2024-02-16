#include<iostream>
#include<vector>
using namespace std;

void merge(int* arr,int start,int end)
{
    int mid = start+(end-start)/2;
    int i = start, j = mid+1 , k= start;

    int total_len = end-start+1;
    int gap = total_len / 2 + total_len % 2;

    while(gap>0)
    {
        int i = start , j = start+gap;

        while(j<=end)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
            i++;
            j++;
        }

        gap = gap<=1 ? 0 : (gap/2) + (gap%2);
    }

}

void mergesort(int *arr , int s ,int e)
{
    //base case

    if(s>=e)
    {
        return;
    }

    int mid = s+(e-s)/2;

    //for left part 
    mergesort(arr,s,mid);

    //for right part 
    mergesort(arr,mid+1,e);
    
    merge(arr,s,e);

}


int main()
{
    int n=4;
    int arr[n]={8, 4, 2, 1};
    int s = 0;
    int e = n-1;

    mergesort(arr,s,e);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}