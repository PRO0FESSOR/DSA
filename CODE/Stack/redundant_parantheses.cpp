// ((a+b))
#include<iostream>
#include<stack>
using namespace std;

bool popit(stack<char>&st)
{
    if(st.top() == '+')
    {
        st.pop();
        
    }
    else{
        return false;
    }

}

bool solve(string inp)
{
    stack<char>st;

    for(int i=0;i<inp.length();i++)
    {
        char ch = inp[i];
        if(ch =='('){
            st.push(ch);
        }
        else if(ch=='+'){
            st.push(ch);
        }
        else if(ch==')')
        {
            popit(st);
            
        }
    }
}

int main()
{
    string inp = "((a+b))";

    solve(inp);

    return 0;
}