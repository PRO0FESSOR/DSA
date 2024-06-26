#include<iostream>
#include<stack>
using namespace std;

void insertatbottom(stack<int>&st,int sortone)
{
    if(st.empty() || (st.top()>sortone))
    {
        st.push(sortone);
        return;
    }
    else{
        int temp = st.top();
        st.pop();
        insertatbottom(st,sortone);
        st.push(temp);
    }
}

// void insertattop(stack<int>&st,int sortone)
// {
//     st.push(sortone);
// }

void sort(stack<int>&st)
{
    //basecase

    if(st.empty())
    {
        return;
    }

    //main recursion

    int sortone = st.top();
    
    st.pop();

    sort(st);


    //test
    
    if(st.empty())
    {
        st.push(sortone);
    }

    //sort

    if(sortone > st.top())
    {
        insertatbottom(st,sortone);
    }
    else if(sortone < st.top()){
        st.push(sortone);
    }

}

int main()
{
    stack<int>st;
    st.push(3);
    st.push(2);
    st.push(10);
    st.push(4);
    st.push(9);

    sort(st);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}