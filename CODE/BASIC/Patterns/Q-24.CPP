#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number -->";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            int ans = j+1;
            char ch = ans+'A'-1;
            cout<<ch;
        }
        for(int j=i;j>=1;j--)
        {
            char ch = j+'A'-1;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}