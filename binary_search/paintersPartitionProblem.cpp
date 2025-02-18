
#include<iostream>
#include<vector>

auto isPossible(std::vector<int>&boards,int painters , int mid) -> bool {
  auto painter = 1;
  auto paintingtime = 0;
  
  for(size_t i=0;i<boards.size();++i){
    if((boards[i]+paintingtime)<=mid){
      paintingtime+=boards[i];  
    }
    else{
      painter++;
      if(painter>painters || boards[i]>mid) return false;
      paintingtime = boards[i];
    }
  }

  return true;
  
}

auto mintime(std::vector<int>&boards,int painters) -> void {
  
  auto s  = 0;
  auto total = 0;

  for(auto board:boards){
    total += board;
  }

  auto e = total;

  auto mid = s+(e-s)/2;
  
  auto ans = total;

  while(s<=e){

  if(isPossible(boards,painters,mid)){
    ans = std::min(ans,mid);
    e=mid-1;
  }
  else{
      s=mid+1;
  }

  mid=s+(e-s)/2;

  }

  std::cout<<"The minimum time to paint the board is -> "<<ans<<std::endl;
}


int main(){
  
  auto boards = std::vector<int>{5, 10, 30, 20, 15};
  auto painters = 3;

  mintime(boards,painters);

  return 0;

}
