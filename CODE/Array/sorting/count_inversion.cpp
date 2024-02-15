#include<iostream>
#include<vector>
using namespace std;

int merge(int* arr,int start,int end,vector<int>temp)
{
    int mid = start+(end-start)/2;
    int i = start, j = mid+1 , k= start;

    int c=0;
 

    while(i<=mid && j<=end)
    {
        if(arr[i]<arr[j])
        {
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            c+=mid-i+1;
        }
    }

    while(i<=mid)
    {
        temp[k++] = arr[i++];
    }

    while(j<=end)
    {
        temp[k++] = arr[j++];
    }

    while(start<=end)
    {
        arr[start] = temp[start];
        ++start;
    }

    return c;

}

int mergesort(int *arr , int s ,int e,vector<int>&temp)
{
    //base case

    if(s>=e)
    {
        return 0 ;
    }

    int mid = s+(e-s)/2;

    int c = 0;

    //for left part 
    c+=mergesort(arr,s,mid,temp);

    //for right part 
    c+=mergesort(arr,mid+1,e,temp);

    c+=merge(arr,s,e,temp);

    return c;

}


int main()
{
    int c = 0;
    int n=4;
    int arr[n]={8, 4, 2, 1};
    int s = 0;
    int e = n-1;

    vector<int>temp(n,0);

    c = mergesort(arr,s,e,temp);

    cout<<"Count inversion is --> "<<c<<endl;

    return 0;
}