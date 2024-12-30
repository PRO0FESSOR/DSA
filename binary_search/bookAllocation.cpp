
// allocate pages in all the student 
// student should get atleast one book 
// each book should be allocated 
// alocation should be in contiguous manner 
// allocate in both student get the max from both students and from all the max return or search for min

#include<iostream>
#include<climits>
#include<vector>

auto isPossibleSolution(int number,std::vector<int>books,int students) -> bool {
  
  auto pages = number;
  auto studentCount = 1;
  auto pageCount = 0;

  for(size_t i=0;i<=books.size()-1;++i){
    if(books[i]+pageCount <= pages){
      pageCount+=books[i];
    }
    else{
      studentCount++;
      if(studentCount > students) return false;
      pageCount=books[i];
    }
  }

  return true;

}

auto search(std::vector<int>books,int students) -> void {
  auto s = 0;
  auto sum = 0;

  for(auto pages:books){
    sum+=pages;
  }

  auto e = sum;
  auto ans = INT_MAX;

  while(s<=e){
    auto mid = s+(e-s)/2;

    if(isPossibleSolution(mid,books,students)){
      ans = std::min(ans,mid);
      e = mid - 1;
    }
    else s = mid + 1;
  }

  std::cout<<"Our answer is - "<<ans<<std::endl;

  return;

}

int main(){
  auto books = std::vector<int>{1,4,4};
  auto students = 3;
  search(books,students);
  return 0;
}
