
// find peak element in a mountain

#include<iostream>
#include<vector>

auto search(std::vector<int>nums) -> void {

  auto start = 0;
  auto end = nums.size()-1;

  while(start<=end){
    auto mid = start + (end-start)/2;
    if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]) {
        std::cout<<"answer is "<<mid<<std::endl; 
        return;
    }
    else if(nums[mid]>nums[mid+1]) end = mid-1;
    else start = mid+1;
  }
    return ;
}

int main(){
  
  auto nums = std::vector<int>{1,2,4,5,4,3};

  search(nums);

  return 0;
  
}
