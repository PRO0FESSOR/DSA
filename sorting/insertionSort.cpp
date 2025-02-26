
// Insertion sort (compare the ith element and put on its correct position)

#include<iostream>
#include<array>

int main(){

  auto arr = std::array{5,4,3,2,1};
  
  for(size_t i=1;i<5;++i){
    auto temp = arr[i];
    
    int j = i-1;
    for(;j>=0;--j){
      if(arr[j]>temp){
        arr[j+1] = arr[j];
      }
      else{
        break;
      }
    }

    arr[j+1] = temp;
  }

  for(size_t i = 0 ; i < 5 ; ++i){
    std::cout<<arr[i]<<" ";
  }std::cout<<std::endl;

  return 0;
}
