
// aggeresive cows 
// minimum distance between any two cows is maximum 

#include<iostream>
#include<vector>
#include<algorithm>

auto isPossible(std::vector<int>stalls,int cows , int mid) -> bool {
  int cowCount = 1;
  int lastPos = stalls[0];

  for(int i=0; i<stalls.size() ; i++){
    if(stalls[i]-lastPos >= mid) {
      cowCount++;
      if(cowCount == cows) return true;
      lastPos = stalls[i];
    }
  }
  return false;
}

int main(){
  auto stalls = std::vector<int>{1,2,4,8,9};
  auto cows = 3;
  
  std::sort(stalls.begin(),stalls.end());

  auto s = 0;
  auto maxi = -1;

  for(size_t i = 0 ; i<stalls.size() ; ++i){
    maxi = std::max(maxi,stalls[i]);
  }

  auto e = maxi;
  auto ans = -1;
  auto mid = s+(e-s)/2;

  while(s<=e){
    if(isPossible(stalls,cows,mid)){
      ans = mid;
      s=mid+1;
    }
    else{
      e = mid-1;
    }
    mid = s+(e-s)/2;
  }

  std::cout<<"ans is - "<<ans<<std::endl;

  return 0;
}
