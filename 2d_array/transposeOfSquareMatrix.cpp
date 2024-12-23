

// transpose of a square matrix 


#include<iostream>

auto transpose(int arr[][3],int rows,int cols) -> void {
  
  for(int i=0;i<rows;++i){
    for(int j=i+1;j<cols;++j){
      std::swap(arr[i][j],arr[j][i]);
    }
  }
}


int main(){

  int rows = 3;
  int cols = 3;
  int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  transpose(arr,rows,cols);

  for(int i=0;i<rows;++i){
    for(int j=0;j<cols;++j){
      std::cout<<arr[i][j]<<" ";
    }
    std::cout<<std::endl;
  }
  return 0;
}
