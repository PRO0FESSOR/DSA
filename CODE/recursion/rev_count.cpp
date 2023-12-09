#include<iostream>
using namespace std;

void count(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;

    count(n-1);
}

int main()
{
    int n;
    cout<<"enter number -->";
    cin>>n;

    count(n);
    return 0;
}