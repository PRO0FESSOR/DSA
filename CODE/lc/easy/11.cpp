// class Solution {
// public:
//     int maxArea(vector<int>& height) {

//         int left = 0;
//         int right = height.size()-1;
//         int maxwater = 0;

//         while(left<right)
//         {
//             int width = right-left;
//             int minheight = min(height[left],height[right]);
//             int watercontain = minheight*width;

//             maxwater = max(maxwater,watercontain);

//             if(height[left]<height[right])
//             {
//                 left++;
//             }
//             else{
//                 right--;
//             }
//         }

//         return maxwater;
        
//     }
// };