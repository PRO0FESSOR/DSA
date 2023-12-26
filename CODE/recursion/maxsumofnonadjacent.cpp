#include<iostream>
using namespace std;

void sume(int arr[],int n,int i,int sum,int &maxi)
{
    if(i>=n)
    {
        maxi = max(maxi,sum);
        return;
    }

    //include 
    sume(arr,n,i+2,sum+arr[i],maxi);
    //exclude
    sume(arr,n,i+1,sum,maxi);

}

int main()
{
    int n = 4;
    int arr[n] = {2,1,4,9};
    int i=0;
    int maxi = INT16_MIN;
    int sum = 0;
    sume(arr,n,i,sum,maxi);
    cout<<maxi<<endl;
    return 0;
}