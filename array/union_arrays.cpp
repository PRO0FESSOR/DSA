#include<iostream>
#include<vector>


auto union_arrays(std::vector<int>&nums,std::vector<int>&nums2) -> void {
  
  std::vector<int> ans;

  for(auto val : nums ){
    ans.push_back(val);
  }
  for(auto val2 : nums2){
    ans.push_back(val2);
  }

  for(auto i : ans){
    std::cout<<i<<" ";
  }
  std::cout<<std::endl;
}


int main()
{
  //input output optimization 
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);  
  std::cout.tie(0);

  //vector initialization 
  
  auto nums = std::vector<int>{1,2,3,4};
  auto nums2 = std::vector<int>{5,6,7,8};
  
  union_arrays(nums,nums2);

  return 0;
}
