//leetcode easy 20


// class Solution {
// public:
//     bool isValid(string s) {
        
//         stack<char>st;
        
//         for(int i=0;i<s.length();i++){
//             char ch = s[i];
            
//             if(ch=='(' || ch=='{' || ch=='[')
//             {
//                 st.push(ch);
//             }
//             else{
//                 //cancellation
//                 if(!st.empty())
//                 {
//                     char topchar = st.top();
                    
//                     if(topchar=='(' && ch == ')')
//                     {
//                         st.pop();
//                     }
//                     else if(topchar=='{' && ch == '}')
//                     {
//                         st.pop();
//                     }
//                     else if(topchar=='[' && ch == ']')
//                     {
//                         st.pop();
//                     }
//                     else{
//                         return false;
//                     }
//                 }
//                 else{
//                     return false;
//                 }
//             }
            
//             }
//         if(st.empty())
//             {
//                 return true;
//             }
//             else{
//                 return false;
//             }
        
//     }
// };