#include<iostream>
#include<vector>

auto pair_sum(std::vector<int>&nums , int key) -> void {
  
  std::vector<std::vector<int>>ans;

  for(size_t in = 0; in<nums.size() ; ++in){
    for(size_t inn = in+1 ; inn<nums.size() ; ++inn){
      if(nums[in] + nums[inn] == key){
        ans.push_back({nums[in], nums[inn]});
      }
  }
  }

  for(const auto& pair : ans){
    std::cout<<"{ "<<pair[0]<<", "<<pair[1]<<" } , ";
  }
  std::cout<<std::endl;

}

int main(){
  
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);

  auto key = 4;
  auto nums = std::vector<int>{1,2,3,2,3,1};

  pair_sum(nums,key);

  return 0;
}
