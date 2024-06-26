//this question is related to reversing the stack using recursion 

#include<iostream>
#include<stack>
using namespace std;


void insert(stack<int>&st,int target)
{
    if(st.empty())
    {
        st.push(target);
        return;
    }

    int temp = st.top();
    st.pop();

    insert(st,target);

    st.push(temp);
}

void reverse(stack<int>&st)
{
    //base case
    if(st.empty())
    {
        return;
    }

    int target = st.top();
    st.pop();

    //recursion
    reverse(st);

    //insert at bottom
    insert(st,target);
}

int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    //reverse function
    reverse(st);


    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;

    return 0;
}