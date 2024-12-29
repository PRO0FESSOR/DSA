
// problem is to find the square root of a x 

#include<iostream>

auto root(int n) -> void {
  auto s = 1;
  auto e = n;

  while(s<=e){
    auto mid = s+(e-s)/2;
    if(mid*mid == n){
      std::cout<<"sqaure root of "<<n<<" is - "<<mid<<std::endl;
      return;
    }
    else if(mid*mid<n) s=mid+1;
    else e=mid-1;
  }
}

int main(){
  int n;
  std::cin>>n;
  root(n);
  return 0;
}
