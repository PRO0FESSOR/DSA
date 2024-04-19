// question is related to find the middle element of the stack

#include<iostream>
#include<stack>
using namespace std;

void middle(stack<int>&st , int middle_size)
{
    if(st.size() == middle_size )
    {
        cout<<"Middle element is = " <<st.top()<<endl;
        st.pop();
        return;
    }

    int temp = st.top();
    st.pop();

    //recursive operation

    middle(st,middle_size);

    //backtrack

    st.push(temp);
}

int main()
{
    stack<int>st;

    st.push(8);
    st.push(7);
    st.push(6);
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    int middle_size = st.size()/2 +1;

    
    middle(st,middle_size);

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }cout<<endl;


    return 0;
}