#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;

    int ans=0;
    int i=0;
    while(n!=0)
    {
        int bit = n&1;
        ans += bit*pow(10,i);
        i++;
        n=n>>1;
    }
    cout<<ans<<endl;
    return 0;
}