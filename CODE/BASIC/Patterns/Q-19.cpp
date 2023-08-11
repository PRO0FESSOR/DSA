#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;

    int i=0;
    while(i<n)
    {
        int space = 0;
        while(space<n-i)
        {
            cout<<" ";
            space++;
        }
        int star=0;
        while(star<i+1)
        {
            cout<<"*"<<" ";
            star++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
