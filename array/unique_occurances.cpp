#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>

auto uniqueOccurances(std::vector<int>&nums) -> bool {

  std::unordered_map<int,int> countMap;

  for(auto num : nums)
  {
    countMap[num]++;
  }

  std::unordered_set<int> occuranceSet;

  for(auto& [key,count]:countMap){
    if(occuranceSet.count(count)){
      return false;
    }
    occuranceSet.insert(count);
  }

  return true;

}

int main(){
  
  //input output optimization 
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);

  // logic
  auto nums = std::vector<int>{1,2};

  (uniqueOccurances(nums)) ? std::cout << "Occurrences are unique" << std::endl : std::cout << "Occurrences are not unique" << std::endl;


  return 0;
}

