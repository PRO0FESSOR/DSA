#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        if(i==1 || i==n)
        {
            int j = 1;
            while(j<=n)
            {
                cout<<"*";
                j++;
            }
        }
        else
        {
            int j=1;
            while(j<=n)
            {
                if(j==1 || j==n)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
                j++;
            }
        }
        cout<<endl;
        i++;
    }
    return 0;
}