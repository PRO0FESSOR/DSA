
// bubble sort

#include<iostream>

int main(){
  
  auto n = 5;
  int arr[n] = {5,4,3,2,1};

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
