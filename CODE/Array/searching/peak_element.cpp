#include<iostream>
#include<vector>
using namespace std;

int peakelement(vector<int>arr)
{
    int s=0;
    int e=arr.size()-1;
    int mid=(s+e)/2;

    while(s<e)
    {
        if(arr[mid] < arr[mid+1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }

        mid=(s+e)/2;
    }

    return s;
}

int main()
{
    vector<int>arr{0,10,5,2};
    cout<<"Peak index is -->"<<peakelement(arr)<<endl;
    return 0;
}