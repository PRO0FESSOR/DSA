
// triplet sum 
// bruteforce - using 3 nested loops to find the sum 
// optimised approach - first sort array then use a loop to settle one or two elements and use two pointer approach to find remnaining elements

#include<iostream>
#include<vector>
#include<algorithm>

auto sum(std::vector<int>&nums, int target) -> void {
  sort(nums.begin(),nums.end());

  for(size_t in=0 ; in<nums.size()-1 ; ++in){
    auto remTraget = target - nums[in];
    auto start = in+1;
    auto end = nums.size()-1;

    while(start<end){
      if(nums[start]+nums[end] == remTraget){ 
        std::cout<<" { "<<nums[in]<<" , "<<nums[start]<<" , "<<nums[end]<<" } "; 
        break;
      }
      else if(nums[start]+nums[end] > remTraget) end--;
      else start++; 
    }
  }

}


int main(){
  auto nums = std::vector<int>{-1, 0, 1, 2, -1, -4};
  auto target = 0;

  sum(nums,target);

  return 0;
}
