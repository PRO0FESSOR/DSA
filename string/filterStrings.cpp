
// create a program that takes a comma seprated input and return the list with a strings having a substring "ab" and the length is greated than 4 .

#include<iostream>
#include<sstream>
#include<vector>
#include<string>

auto filterStrings(std::vector<std::string>&elements) -> std::vector<std::string> {
  std::vector<std::string> result;
  for(auto &element : elements)
  {
    if(element.length()> 4 && element.find("ab") != std::string::npos )
    {
      result.push_back(element);        
    }
  }
  return result;
}

int main(){
  std::string input;
  std::cout<<"enter the input: "<<std::endl;
  std::getline(std::cin,input);
  std::cout<<"your entered input is - "<<input<<std::endl;
  
  std::vector<std::string> elements;

  std::stringstream ss(input);
  std::string item;

  while(std::getline(ss,item,',')){
    elements.push_back(item);
  }

  std::vector<std::string> answers = filterStrings(elements);

  std::cout<<"filtered strings are :"<<std::endl;
  
  for(auto &answer : answers){
    std::cout<<answer<<" "; 
  }std::cout<<std::endl;
  
  return 0;
}
