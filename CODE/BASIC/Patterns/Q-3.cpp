#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int i=0;
    int count = 1;
    while(i<n)
    {
        int j=0;
        while(j<n)
        {
            cout<<count <<" ";
            count++;
            j++;
        }
        cout<<endl;
        i = i+1;
    }
    return 0;
}