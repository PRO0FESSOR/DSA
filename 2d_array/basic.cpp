
// declaration of 2d arrays

#include<iostream>

int main(){
  auto rows = 3;
  auto columns = 3;

  int arr[rows][columns];

  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++)
    {
      std::cout<<"Enter value for -> arr["<<i<<"]["<<j<<"] ";
      std::cin>>arr[i][j];
    }
  }

  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      std::cout<<arr[i][j]<<" ";
    }
    std::cout<<std::endl;
  }

  return 0;
}
