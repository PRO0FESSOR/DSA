#include<iostream>
#include<stack>
using namespace std;


int main()
{
    string s = "hello";

    stack<char>st;

    int i=0;
    while(i!=s.length())
    {
        st.push(s[i]);
        i++;
    }

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}