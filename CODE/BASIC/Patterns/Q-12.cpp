#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    char ch='A';
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {           
            cout<<ch;
            j++;
        }   
        cout<<endl;
        ch++;
        i++;
    }
    return 0;
}