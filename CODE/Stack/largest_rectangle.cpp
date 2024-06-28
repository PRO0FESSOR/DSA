// // lc 84 hard largest rectangle in a histogram

// class Solution {
// public:

//     vector<int>nextsmallerelement(vector<int>heights)
//     {
//         stack<int>st;
//         st.push(-1);

//         vector<int>next(heights.size());

//         for(int i=heights.size()-1;i>=0;i--)
//         {
//             int input = heights[i];

//             while(st.top()!= -1 && heights[st.top()]>=input)
//             {
//                 st.pop();
//             }

//             next[i] = st.top();
//             st.push(i);
//         }

//         return next;
//     }

//     vector<int>prevsmallerelement(vector<int>heights)
//     {
//         stack<int>st;
//         st.push(-1);

//         vector<int>prev(heights.size());

//         for(int i=0;i<heights.size();i++)
//         {
//             int input = heights[i];

//             while(st.top()!= -1 && heights[st.top()]>=input)
//             {
//                 st.pop();
//             }

//             prev[i] = st.top();
//             st.push(i);
//         }        

//         return prev;
//     }

//     int largestRectangleArea(vector<int>& heights) {

//         vector<int>next = nextsmallerelement(heights);
//         vector<int>prev = prevsmallerelement(heights);

//         int maxarea = INT_MIN;

//         for(int i=0;i<heights.size();i++)
//         {
//             int length = heights[i];
            
//             if(next[i] == -1)
//             {
//                 next[i] = heights.size();
//             }

//             int width = next[i]-prev[i]-1;
//             int area  = length*width;

//             maxarea = max(maxarea,area);
//         }

//         return maxarea;

//     }
// };