#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number -->";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            for(int j=0;j<i+1;j++)
        {
            cout<<j+1<<" ";
        }
        }
        else{
            for(int j=0;j<i+1;j++)
        {
            if(j==0)
            {
                cout<<j+1 <<" ";
            }
            else if(j==i)
            {
                cout<<j+1<<" ";
            }
            else{
                cout<<j<<"  ";
            }
        }
        }
        cout<<endl;
    }
    return 0;
}