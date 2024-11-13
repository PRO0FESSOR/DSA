// reverse of an array 

#include<iostream>
#include<vector>

auto reverse(std::vector<int>&nums) -> void {
  auto start = 0;
  auto end = nums.size()-1;

  while(start<=end){
    std::swap(nums[start],nums[end]);
    start++;
    end--;
  }
}


int main(){
  
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);

  auto nums = std::vector<int>{1,2,3,4,5};
  

  reverse(nums);

  for(auto num: nums){
    std::cout<<num<<" "; 
  }std::cout<<std::endl;


  return 0;
}
