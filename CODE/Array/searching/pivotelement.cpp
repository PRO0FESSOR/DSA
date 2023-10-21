#include<iostream>
#include<vector>
using namespace std;

int pivot(vector<int>arr)
{
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        if(arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else{
            e = mid-1;
        }

        mid = s+(e-s)/2;
    }

    return -1;
}

int main()
{
    vector<int>arr{9,10,1,2,3,4,5,6,7,8};

    int ans = pivot(arr);

    if(ans)
    {
        cout<<"PIVOT ELEMENT IS AT --> "<<ans<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}