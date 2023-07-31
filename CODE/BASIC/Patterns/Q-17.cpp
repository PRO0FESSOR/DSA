#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;

    int i=n;
    while(i>0)
    {
        int j=1;
        while(j<=i)
        {
            cout<<j<<" ";
            j++;
        }
        int space=n-i;
        while(space)
        {
            cout<<"* ";
            space--;
        }
        int star = n-i;
        while(star)
        {
            cout<<"* ";
            star--;
        }
        int k = i;
        while(k>0)
        {
            cout<<k<<" ";
            k--;
        }

        
        cout<<endl;
        i--;
    }
    return 0;
}