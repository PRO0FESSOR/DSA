// soltuion 1 using sort 0(nlogn)
/**/
/*class Solution {*/
/*public:*/
/*    vector<int> findDuplicates(vector<int>& nums) {*/
/**/
/*        vector<int> ans;*/
/**/
/*        sort(nums.begin(),nums.end());*/
/**/
/*        for(int i=0;i+1<nums.size();i++){*/
/*            if(nums[i] == nums[i+1]){*/
/*                ans.push_back(nums[i]);*/
/*            }*/
/*        }*/
/**/
/*        return ans;*/
/**/
/*    }*/
/*};*/


//solution 2 using array of 0's 
/**/
/*#include<iostream>*/
/*#include<vector>*/
/**/
/*auto all_duplicates(std::vector<int>&nums,std::vector<int>&ans) -> void {*/
/**/
/*  auto values = std::vector<int>(nums.size(),0);*/
/**/
/*  for (auto i : nums) {*/
/*        if (values[i - 1] == 1) {*/
/*            ans.push_back(i);*/
/*        } else {*/
/*            values[i - 1] = 1;*/
/*        }*/
/*}*/
/*}*/
/**/
/*int main(){*/
/**/
/*  //input output optimization*/
/*  std::ios::sync_with_stdio(false);*/
/*  std::cin.tie(0);*/
/*  std::cout.tie(0);*/
/**/
/*  auto nums = std::vector<int>{1,1,2,2,3,4};*/
/*  std::vector<int>ans;*/
/**/
/*  all_duplicates(nums,ans);*/
/**/
/*  for(auto &i : ans){*/
/*    std::cout<<i<<" ";*/
/*  }*/
/*  std::cout<<std::endl;*/
/**/
/*  return 0;*/
/**/
/*}*/


// solution 3 o(n) using in place updation for marking  


#include<iostream>
#include<vector>

auto all_duplicates(std::vector<int>&nums) -> void {
  
  auto n = nums.size();
  std::cout<<"size is "<<n<<" "<<std::endl;

  for(auto val : nums){
    nums[val-1] += n;
  }

  std::vector<int>ans;

  for(size_t i=0;i<n;++i){
    if((nums[i]/n)>1) ans.push_back(i+1);
  }

  for(auto val : ans){
    std::cout<<val<<" ";
  }
  std::cout<<std::endl;

}


int main(){
  
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);

  auto nums = std::vector<int>{1,1,2,2,3,4};

  all_duplicates(nums);

  return 0;


}



