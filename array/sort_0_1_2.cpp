#include<iostream>
#include<vector>

auto sort_numbers(std::vector<int>&nums) -> void {
  
  auto i = 0;
  auto k = 0;
  auto j = nums.size()-1;

  while(k<j){
    if(nums[k] == 0){
      std::swap(nums[k++],nums[i++]);
    }
    else if(nums[k] == 1) k++;
    else{
      std::swap(nums[k],nums[j--]);
    }
  }
}


int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);

  auto nums = std::vector<int>{2,0,2,1,1,0};

  sort_numbers(nums);

  for(auto i : nums){
    std::cout<<i<<" ";
  }
  std::cout<<std::endl;

  return 0;
}
