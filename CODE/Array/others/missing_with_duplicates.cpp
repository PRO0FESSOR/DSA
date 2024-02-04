#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1,5,3,3,4};
    
    for(int i=0;i<n;i++)
    {
        int index = abs(arr[i]);

        if(arr[index-1] > 0)
        {
            arr[index-1] *= -1;
        }
    }

    int ans;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            ans = i+1;
        }
    }
    cout<<ans<<endl;

    return 0;
}