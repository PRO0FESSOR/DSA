
#include<iostream>
#include<vector>

int main(){
  int size = 5;
  std::vector<int>arr(size,1);

  for(auto i : arr)
  {
    std::cout<<i<<" ";
  }std::cout<<std::endl;

  return 0;
}
