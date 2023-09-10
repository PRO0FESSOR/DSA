#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact = num ;
    for(int i=num-1;i>0;i--)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    int num;
    cout<<"enter number -->";
    cin>>num;
    cout<<"factorial is -->"<<factorial(num)<<endl;
    return 0;
}