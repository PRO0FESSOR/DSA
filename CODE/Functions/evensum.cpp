#include<iostream>
using namespace std;

int evensum(int n)
{
    int sum=0;
    for(int i=2;i<=n;i=i+2)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    int number ;
    cout<<"enter number -->";
    cin>>number;
    cout<<"your even sum is -->"<<evensum(number)<<endl;
    return 0;
}