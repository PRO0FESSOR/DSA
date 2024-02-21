// 53. Maximum Subarray


// class Solution {
// public:

//     int maxSubArrayHelper(vector<int>&v,int start,int end)
//     {
//         //basecase
//         if(start==end) return v[start];
//         int maxLeftBorderSum = INT_MIN, maxRightBorderSum = INT_MIN;
//         int mid = start + (end-start) / 2;
        
//         //recurssion logic
//         int maxLeftSum = maxSubArrayHelper(v,start,mid);
//         int maxRightSum = maxSubArrayHelper(v,mid+1,end);

//         //cross border sum
//         int leftbordersum = 0, rightbordersum = 0;

//         for(int i=mid;i>=start;i--)
//         {
//             leftbordersum += v[i];
//             if(leftbordersum > maxLeftBorderSum) maxLeftBorderSum = leftbordersum;
//         }

//         for(int i=mid+1;i<=end;i++)
//         {
//             rightbordersum += v[i];
//             if(rightbordersum > maxRightBorderSum) maxRightBorderSum = rightbordersum;
//         }

//         int crossbordersum = maxLeftBorderSum + maxRightBorderSum;

//         return max(maxLeftSum,max(maxRightSum,crossbordersum));


//     }

//     int maxSubArray(vector<int>& nums) {

//         return maxSubArrayHelper(nums,0,nums.size()-1);
        
//     }
// };