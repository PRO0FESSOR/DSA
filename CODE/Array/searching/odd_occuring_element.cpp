#include<iostream>
#include<vector>
using namespace std;

int oddelement(vector<int>arr)
{
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;

    while(s<e)
    {
        if(mid%2 == 0)
        {
            if(arr[mid] == arr[mid+1])
            {
                s = mid+2;
            }
            else{
                e = mid;
            }
        }
        else{
            if(arr[mid] == arr[mid-1])
            {
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }

        mid = s+(e-s)/2;
    }

    return mid;
}


int main()
{
    vector<int>arr{1,1,2,2,3,3,4,4,5,5,6,6,2,7,7};

    int ans = oddelement(arr);

    cout<<"odd occuring element is --> "<<arr[ans]<<endl;
    return 0;
}