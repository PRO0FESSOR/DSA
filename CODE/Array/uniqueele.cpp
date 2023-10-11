#include<iostream>
#include<vector>
using namespace std;

int uele(vector<int>arr)
{
    int ans = 0;

    for(int i=0;i<arr.size();i++)
    {
        ans = ans ^ arr[i];
    }
    
    return ans;
}

int main()
{
    int n ;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    
    vector<int>arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"array is --> ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    int uniqueelement = uele(arr);

    cout<<"unique elemsnt is the array containing duplicate elements are --> "<<uniqueelement<<endl;

    return 0;
}