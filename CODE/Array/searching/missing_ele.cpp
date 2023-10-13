#include<iostream>
#include<vector>
using namespace std;

int missele(vector<int>arr)
{
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(arr[mid]==mid)
        {
            s = mid+1;
        }
        else{
            e = mid-1;
        }

        mid = s+(e-s)/2;
    }

    return s;
}

int main()
{
    vector<int>arr{0,1,2,3,5};
    cout<<"Missing element is -->"<<missele(arr)<<endl;
    return 0;
}