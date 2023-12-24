#include<iostream>
using namespace std;

void sub(string s , int i,string output)
{
    if(i >= s.length())
    {
        return;
    }

    sub(s,i+1,output);

    output += s[i];
    cout<<"for index "<<i<<" "<< output<<endl;
    sub(s,i+1,output);
}

int main()
{
    string s = "abc";
    string output = "";
    int i = 0;

    sub(s,i,output);

    return 0;
}