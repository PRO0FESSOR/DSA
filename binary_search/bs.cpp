
// binary search

#include<iostream>
#include<vector>

auto search(std::vector<int>nums,int target) -> void {
  auto start = 0;
  auto end = nums.size()-1;

  while(start<end){
    auto mid = start + (end-start)/2;
    if(nums[mid] == target){
      std::cout<<"Index found --> "<<mid<<std::endl;
      return;
    }
    else if(target > nums[mid]) start = mid+1;
    else end = mid-1;
  }
}

int main(){

  auto target = 17;
  auto nums = std::vector<int>{11,13,14,15,17,19};

  search(nums,target);

  return 0;

}
