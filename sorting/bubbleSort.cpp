
// bubble sort

#include<iostream>

int main(){
  
  auto n = 6;
  int arr[n] = {9,2,10,8,11,6};

  for(int i=1;i<n;++i){
    for(int j=0;j<n-i;++j){
      if(arr[j]>arr[j+1]){
        std::swap(arr[j],arr[j+1]);
      }
    }
  }

  for(int i=0;i<n;++i){
    std::cout<<arr[i]<<" ";
  }std::cout<<std::endl;

  return 0;
}
