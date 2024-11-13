#include<iostream>
#include<vector>

auto sort_numbers(std::vector<int>&nums) -> void {
  
  auto i = 0;
  auto j = nums.size()-1;

  while(i<j){
    while(nums[i] == 0 && i<j){
      i++;
    }
    while(nums[j] == 1 && i<j){
      j--;
    }
    
    if(i<j){
    std::swap(nums[i],nums[j]);
    i++;
    j--;
    }
  }
}

int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);

  auto nums = std::vector<int>{0,1,0,1,0,1,1};

  sort_numbers(nums);

  for(auto i : nums){
    std::cout<<i<<" ";
  }
  std::cout<<std::endl;

  return 0;
}
