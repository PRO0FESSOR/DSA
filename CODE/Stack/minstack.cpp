// class MinStack {
// public:

//     vector<pair<int,int>> st;

//     MinStack() {
        
//     }
    
//     void push(int val) {
//         if(st.empty())
//         {
//             st.push_back(make_pair(val,val));
//             return;
//         }        
//         else{
//             int minval = min(val,st.back().second);
//             st.push_back(make_pair(val,minval));
//             return;
//         }
//     }
    
//     void pop() {
//         st.pop_back();
//         return;
//     }
    
//     int top() {
//         return st.back().first;
//     }
    
//     int getMin() {
//         return st.back().second;
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */