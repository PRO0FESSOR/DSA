
// selection sort 

#include<iostream>

int main(){

  int arr[5] = {5,4,3,2,1};

  for(int i=0;i<5;i++){
    int val = i;
    for(int j=i+1;j<5;j++){
      if(arr[j]<arr[val]){
        val = j;
      }
    }
    std::swap(arr[val],arr[i]);
  }

  for(int i=0;i<5;i++){
    std::cout<<arr[i]<<" "; 
  }std::cout<<std::endl;

  return 0;

}
