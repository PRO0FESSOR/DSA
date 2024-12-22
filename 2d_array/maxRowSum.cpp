
// max row sum 

#include<iostream>

auto maxrowsum(int arr[][3],int row,int column) -> void {

  auto maxsum = 0;

  for(int i=0;i<row;++i){
    auto sum = 0;
    for(int j=0;j<column;++j){
     auto val = arr[i][j];
     sum+=val;
    }
    maxsum = std::max(maxsum,sum);
    std::cout<<"Sum of row-"<<i+1<<" -> "<<sum<<std::endl;
  }

  std::cout<<"The maximum row sum is -> "<<maxsum<<std::endl;

  return;

}

int main(){
  int row = 3;
  int column = 3;
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

  std::cout<<"Printing array"<<std::endl;


  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      std::cout<<arr[i][j]<<" ";
    }
    std::cout<<std::endl;
  }

  maxrowsum(arr,row,column);
  return 0;
}
