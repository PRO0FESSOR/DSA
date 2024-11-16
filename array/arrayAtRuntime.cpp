
// array at runtime

#include<iostream>


int main(){
  int size;
  std::cout<<"enter the size : ";
  std::cin>>size;

  int* arr = new int[size];

  //assigning values
  for(size_t i=0 ; i<size ; i++){
    arr[i] = i+1;
  }

  //printing

   std::cout << "Array elements are: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

  return 0;

}

