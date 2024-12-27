
// search in a rotated sorted array

#include<iostream>
#include<vector>


auto searchPivot(std::vector<int>nums) -> int {
  auto s = 0;
  auto e = nums.size()-1;

  while(s<=e){
    auto mid = s+(e-s)/2;

    if(nums[mid]<nums[mid-1] && mid>=0){
      return mid;
    }
    else if(nums[mid]>=nums[0]) s = mid + 1;
    else e = mid-1;
  }
  return 1;
}


auto searchElement(std::vector<int>nums,int target,int pivot) -> void {
  
  int s,e;

  if(target<=nums[nums.size()-1]){
    s = pivot;
    e = nums.size()-1;
  }
  else{
    s = 0;
    e = pivot-1;
  }

  while(s<=e){
    auto mid = s+(e-s)/2;

    if(nums[mid]==target){
      std::cout<<"searched index is - "<<mid<<std::endl;
      return;
    }
    else if(nums[mid]<target) s=mid+1;
    else e = mid-1;
  }
}


int main(){
  auto target = 3;
  auto nums = std::vector<int>{5,6,1,2,3,4};
  auto pivot = searchPivot(nums);
  searchElement(nums,target,pivot);
  return 0;
}
