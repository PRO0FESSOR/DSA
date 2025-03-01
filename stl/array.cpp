
// array container from standard template library

#include<iostream>
#include<array>

int main(){
  
  // basic array 
  int basic[3] = {1,2,3};
  auto arr = std::array{5, 4, 3, 2, 1};
  auto size = arr.size();
  for(size_t i=0;i<size;++i){
    std::cout<<arr[i]<<" ";
  }std::cout<<std::endl;

  std::cout<<"at 2 -> "<<arr.at(2)<<" at front -> " << arr.front()<<std::endl;
  return 0; 
}
