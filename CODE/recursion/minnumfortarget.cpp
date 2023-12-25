#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>&arr,int target)
{
    //basecase
    if(target <= 0)
    {
        return 0;
    }
    // if(target < 0)
    // {
    //     return INT16_MAX;
    // }

    int mini = INT16_MAX;

    for(int i=0;i<arr.size();i++)
    {
        int ans = solve(arr,target-arr[i]);

        mini = min(mini,ans+1);
    }

    return mini;


}

int main()
{
    vector<int>arr{1,2};
    int target = 7;

    cout<<solve(arr,target)<<endl;

    return 0;
}