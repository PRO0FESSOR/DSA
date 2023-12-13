#include<iostream>
using namespace std;

bool find(string s,int i,int n,char key)
{
    if(i>=n)
    {
        return false;
    }

    if(s[i]==key)
    {
        return true;
    }

    return find(s,i+1,n,key);
}

int main()
{
    string s = "siddharth";
    int i=0;
    int n=8;
    char key='q';

    cout<<find(s,i,n,key)<<endl;

    return 0;
}