
// wave print 

// 1 2 3 
// 4 5 6 
// 7 8 9
// output -> 1 4 7 8 5 2 3 6 9

#include<iostream>
#include<vector>

auto waveprint(std::vector<std::vector<int>>&arr,int rows,int cols) -> void {
  
  std::cout<<"printing answers ::"<<std::endl;

  for(int i = 0 ; i<cols ; ++i){
    if(i&1){
      for(int j=rows-1; j>=0 ; --j){
        std::cout<<arr[j][i]<<" ";
      }
    }
    else{
      for(int j=0;j<rows;++j){
        std::cout<<arr[j][i]<<" ";
      }
    }  
  }
}

int main(){
  int rows = 3;
  int cols = 3;

  std::vector<std::vector<int>> arr = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };

  waveprint(arr,rows,cols);

  return 0;
}
