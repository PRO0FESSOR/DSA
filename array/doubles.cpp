
#include<iostream>
#include<vector>

int main(){
  int size;
  std::cout<<"enter the size : ";
  std::cin>>size;

  std::vector<int>arr(size);

  for(size_t i=0 ; i<arr.size() ; i++ ){
    std::cin>>arr[i];
  }
  std::cout<<"doubles are :"<<std::endl;

  for(auto &item:arr){
    std::cout<<item*item<<" ";
  }std::cout<<std::endl;

  return 0;
}
