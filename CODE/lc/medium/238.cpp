

// 238. Product of Array Except Self


// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {

//         int product = 1;
//         int zeros = 0;
//         vector<int>answer(nums.size(),0);

//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]!=0){
//                 product*=nums[i];
//             }            
//             else{
//                 zeros++;
//             }
//         }

//         if(zeros == 1){

//             for(int i=0;i<nums.size();i++){
//                 if(nums[i] == 0)
//                 {
//                     answer[i] = product;
//                 }
//             }

//         }
//         else if(zeros == 0){

//             for(int i=0;i<nums.size();i++)
//             {
//                     int val = product/nums[i];
//                     answer[i]=val;
//             }

//         }

        

        

//         return answer;
        
//     }
// };