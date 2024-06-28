
// 32. Longest Valid Parentheses

#include<iostream>
#include<string>
#include<math.h>
#include<stack>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {

        stack<int> st;
        st.push(-1);

        int maxvalidparanthesis = 0;


        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '('){
                st.push(i);
            }
            else{
                st.pop();
                if(!st.empty())
                {
                    int len = i - st.top();
                    maxvalidparanthesis = max(maxvalidparanthesis,len);
                }
                else{
                    st.push(i);
                }
            }
        }

        return maxvalidparanthesis;
        
    }
};

int main()
{
    Solution s;
    cout<<s.longestValidParentheses("((((((()))))")<<endl;
}