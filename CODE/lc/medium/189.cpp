#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>&a, int k)
{
    int n = a.size();    
    vector<int>temp(n);

    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n] = a[i];
    }

    a = temp;

}

int main()
{
    int n;
    cout<<"enter size of ypur array -->";
    cin>>n;
    vector<int>a;

    cout<<"Enter your array"<<endl;

    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        a.push_back(value);
    }

    int k;
    cout<<"enter the number for rotation"<<endl;
    cin>>k;

    cout<<"PRINTING INPUT"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }  

    rotate(a,k);

    cout<<"PRINTING OUTPUT"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }



}