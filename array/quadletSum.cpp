
// quadlet sum 
// bruteforce - using 4 nested loops to find the sum 
// optimised approach - first sort array then use a loop to settle one or two elements and use two pointer approach to find remnaining elements

#include<iostream>
#include<vector>
#include<algorithm>

auto sum(std::vector<int>&nums, int target) -> void {
  sort(nums.begin(),nums.end());

  for(size_t in=0 ; in<nums.size()-2 ; ++in){
  for(size_t in2=in+1 ; in2<nums.size()-1 ; ++in2){
    auto remTraget = target - nums[in] - nums[in2];
    auto start = in2+1;
    auto end = nums.size()-1;

    while(start<end){
      if(nums[start]+nums[end] == remTraget){ 
        std::cout<<" { "<<nums[in]<<" , "<<nums[in2]<<" , "<<nums[start]<<" , "<<nums[end]<<" } "; 
        break;
      }
      else if(nums[start]+nums[end] > remTraget) end--;
      else start++; 
    }
  }

}
}


int main(){
  auto nums = std::vector<int>{1,2,3,4,5,6,7,8,9,10};
  auto target = 34;

  sum(nums,target);

  return 0;
}


