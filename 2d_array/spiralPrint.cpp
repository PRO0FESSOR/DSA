
// wave print
// 1 2 3 
// 4 5 6
// 7 8 9 
// output = 1 2 3 6 9 8 7 4 5 

#include<iostream>
#include<vector>

auto spiralprint(std::vector<std::vector<int>>arr,int rows,int cols) -> void {

  std::cout<<"Printing spiral answer ::"<<std::endl;

  auto count = 0;
  auto total  = rows*cols;

  auto startingCol = 0;
  auto endingCol = cols-1;
  auto startingRow = 0;
  auto endingRow = rows-1;


  while(count<total){

    for(int i=startingCol;i<=endingCol;++i){
      std::cout<<arr[startingRow][i]<<" ";
      count++;
    }
    startingRow++;
    
    for(int i=startingRow;i<=endingRow;++i){
      std::cout<<arr[i][endingCol]<<" ";
      count++;
    }
    endingCol--;
    for(int i=endingCol;i>=startingCol;--i){
      std::cout<<arr[endingRow][i]<<" ";
      count++;
    }
    endingRow--;
    for(int i = endingRow;i>=startingRow;--i){
      std::cout<<arr[i][startingCol]<<" ";
      count++;
    }
    startingCol++;
  }

}

int main(){

  auto rows = 3;
  auto cols = 3;
  std::vector<std::vector<int>> arr = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };

  spiralprint(arr,rows,cols);

 return 0;
}
