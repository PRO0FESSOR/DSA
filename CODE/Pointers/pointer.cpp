#include<iostream>
using namespace std;

int main()
{
    int a = 5;

    int * p = &a;

    cout<<"The value p is pointing to is -->"<<*p<<endl;

    return 0;
}