
// list in stl

#include<iostream>
#include<list>

int main(){
  
  auto l = std::list<int>{1,2,3};

  l.push_back(4);
  l.push_front(0);

  for(auto i : l){
    std::cout<<i<<" ";
  }std::cout<<std::endl;

  std::cout<<"size - "<<l.size();


  return 0;
}
