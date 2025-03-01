
// dequeue 

#include<iostream>
#include<deque>

int main(){
  
  auto d = std::deque<int>{1,2,3};
  
  d.push_back(4);
  d.push_front(0);
  d.push_front(-1);
  
  d.pop_front();

  d.erase(d.begin(),d.begin()+1);

  for(auto i : d){
    std::cout<<i<<" ";
  }std::cout<<std::endl;



  return 0;
}


