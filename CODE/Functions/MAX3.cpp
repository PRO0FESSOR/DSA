#include<iostream>
using namespace std;

int max3(int num1,int num2,int num3)
{
    if(num1>num2 && num1>num3) return num1;
    else if(num2>num1 && num2>num3) return num2;
    else return num3;
}

int main()
{
    int num1 , num2,num3;
    cout<<"num1-->";
    cin>>num1;
    cout<<"num2-->";
    cin>>num2;
    cout<<"num3-->";
    cin>>num3;
    cout<<"maximum of 3 numbers is --> "<<max3(num1,num2,num3);
    return 0;
}