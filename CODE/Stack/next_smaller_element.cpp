// q =  find the next smaller element for the given input 
// inp = [2,1,5,6,2,3]
// out = [1,-1,2,2,-1,-1]

#include<iostream>
#include<stack>
#include<vector>
using namespace std;


int main()
{
    vector<int> s{2,1,4,3};
    vector<int>ans(s.size());

    stack<int>st;
    st.push(-1);

    for(int i=s.size()-1;i>=0;i--)
    {
        while(s[i]<=st.top())
        {
            st.pop();
        }

        ans[i] = st.top();
        st.push(s[i]);
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }


    
}