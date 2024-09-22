// solution 1 using sort - n log n 

/*class Solution {*/
/*public:*/
/*    int singleNumber(vector<int>& nums) {*/
/**/
/*        sort(nums.begin(),nums.end());*/
/**/
/*        if(nums.size()==1){*/
/*            return nums[0];*/
/*        }*/
/**/
/*        for(int i=0;i<nums.size();i+=2){*/
/*            if(nums[i]!=nums[i+1]){*/
/*                return nums[i];*/
/*            }*/
/*        }*/
/*        return 0;*/
/*    }*/
/*};*/


//solution 2 usin xor o(n)

#include<iostream>
#include<vector>

auto singleinteger(std::vector<int>&nums) -> int {
  auto ans  = 0;

  for(auto i : nums){
    ans = ans^i;
  }

  return ans;

}

int main(){
  //input output optimization
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);

  //logic
  auto nums = std::vector<int>{4,1,2,1,2};
  std::cout<<singleinteger(nums)<<std::endl;

  return 0;
}
