#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int brr[n] = {6,7,8,9,10};

    vector<int> ans;

    for(int i=0;i<n;i++)
    {
        ans.push_back(arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        ans.push_back(brr[i]);
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }


    return 0;
}