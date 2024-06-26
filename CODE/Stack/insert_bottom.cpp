#include<iostream>
#include<stack>
using namespace std;

void insert(stack<int>&st,int val)
{
    if(st.empty())
    {
        st.push(val);
        return;
    }
    else{
        int temp = st.top();
        st.pop();
        insert(st,val);
        if(temp!=val)
        {
            st.push(temp);
        }
    }
}

int main()
{
    stack<int>st;
    st.push(27);
    st.push(32);
    st.push(11);

    int val = st.top();
    insert(st,val); 

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}