
// find the leftmost and rightmost occurance of a target in an array 

#include<iostream>
#include<vector>

auto search(std::vector<int>nums,int target) -> void {
  
  auto start = 0;
  auto end = nums.size()-1;

  auto leftMostIndex = -1;
  auto rightMostIndex = -1;

  while(start<=end){

    auto mid  = start + (end-start)/2;

    if(nums[mid]==target){
      leftMostIndex = mid;
      end = mid-1;
    }
    else if(target > nums[mid]) start = mid+1;
    else end = mid-1;
  }

  start = 0;
  end = nums.size()-1;

  while(start<=end){
    auto mid  = start + (end-start)/2;

    if(nums[mid]==target){
      rightMostIndex = mid;
      start = mid+1;
    }
    else if(target > nums[mid]) start = mid+1;
    else end = mid-1;
   }

  std::cout<<"The leftmost index of "<<target<<" is "<<leftMostIndex<<" and rightMostIndex is "<<rightMostIndex<<std::endl;

  return;


}


int main(){
  auto target = 3;
  auto nums = std::vector<int>{1,2,3,3,3,3,3,3,5,6};
  search(nums,target);
  return 0;
}
