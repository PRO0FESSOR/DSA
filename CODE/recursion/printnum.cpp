#include<iostream>
using namespace std;

void print(int d)
{
    if(d==0)
    {
        return;
    }
    int newnum = d/10;
    print(newnum);

    int a = d%10;
    cout<<a<<endl;

    
}

int main()
{
    int digit = 345;
    int i=0;

    print(digit);

    return 0;
}