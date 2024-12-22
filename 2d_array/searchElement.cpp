
// search an element in 2d array

#include<iostream>
using namespace std;

auto search(int arr[][3],int trgt,int row,int column) -> void {
   for(int i=0 ; i<row ; ++i){
     for(int j=0; j<column; ++j){
       auto val = arr[i][j];
    if(val == trgt){
      cout<<"target found"<<endl;
      return;
    }}
   }

   cout<<"target not found"<<endl;
   return ;

}

int main(){
  int row = 3;
  int column = 3;
  int target = 40;
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  search(arr,target,row,column);
  return 0;
}
