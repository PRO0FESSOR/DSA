
// max and min elements in a matrix

#include<iostream>
#include<algorithm>

auto maxmin(int arr[][3],int rows,int cols) -> void {
  auto maxEle = 0;
  auto minEle = arr[0][0];

  for(int i=0;i<rows;i++){
   for(int j=0;j<cols;++j){
      auto element = arr[i][j];
      maxEle = std::max(maxEle,element);
      minEle = std::min(minEle,element);
   }
  }

  std::cout<<"maximum element is  - "<<maxEle<<" minimum element is - "<<minEle<<std::endl;
  return;

}

int main(){
  auto rows = 3;
  auto cols = 3;
  int arr[3][3] = {
    {3,4,6},
    {9,34,65},
    {2,43,64}
  };
  maxmin(arr,rows,cols);
  return 0;
}
