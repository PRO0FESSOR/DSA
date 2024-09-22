#include<iostream>
#include<vector>

auto swapWithNext(std::vector<int>&nums) -> void {
  
  for(auto i=nums.begin() ; i+1<nums.end() ; i+=2){
    if(*(i+1)){
      auto val = *i;
      *i = *(i+1);
      *(i+1) = val;
    }
  }

}

int main(){
  //input output optimization 
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);

  //logic
  auto nums = std::vector<int>{1,2,7,8,5};

  swapWithNext(nums);
  std::cout<<"your array is swaped :)"<<std::endl;

  for(auto i:nums){
    std::cout<<i<<" ";  
  }
  std::cout<<std::endl;

  return 0;

}
