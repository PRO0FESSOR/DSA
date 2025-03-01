
// vector container stl

#include<iostream>
#include<vector>

int main(){
  
  auto v = std::vector<int>{1,2,3};
  std::cout<<"capacity is - "<<v.capacity()<<" size is - "<<v.size()<<" front is - "<< v.front()<<" last is - "<<v.back()<<std::endl; 
  v.push_back(4);
  v.push_back(5);
  for(auto i : v){
    std::cout<<i<<" ";
  }std::cout<<std::endl;

  return 0;

}
