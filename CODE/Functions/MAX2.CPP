#include<iostream>
using namespace std;

int max2(int num1,int num2)
{
    if(num1>num2) return num1;
    else return num2;
}

int main()
{
    int num1 , num2;
    cout<<"num1-->";
    cin>>num1;
    cout<<"num2-->";
    cin>>num2;
    cout<<"maximum of 2 numbers is --> "<<max2(num1,num2);
    return 0;
}