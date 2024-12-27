
// find the pivot index in a array - pivot index is les previous and more than next element 

#include<iostream>
#include<vector>

auto search(std::vector<int>nums) -> void {
  auto s = 0;
  auto e = nums.size()-1;

  while(s<=e){
    auto mid = s+(e-s)/2;

    if(nums[mid]<nums[mid-1] && mid>=0){
      std::cout<<"pivot index is - "<<mid<<std::endl;
      return;
    }
    else if(nums[mid]>=nums[0]) s = mid + 1;
    else e = mid-1;
  }
}

int main(){
  auto nums = std::vector<int>{6,1,2,3,4,5};
  search(nums);
  return 0;
}
