#include<iostream>
using namespace std;

int binary(int arr[] , int key, int s , int e )
{
    if(s>e)
    {
        return 0;
    }

    int mid = s + (e-s)/2;

    if(arr[mid] == key)
    {
        return mid;
    }

    if(arr[mid] < key)
    {
        return binary(arr,key,mid+1,e);
    }
    
    
    return binary(arr,key,s,mid-1);
    

}

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int key = 1;
    int s = 0;
    int e = n-1;

    cout<<binary(arr,key,s,e)<<endl;

    return 0;
}