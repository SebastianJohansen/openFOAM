#include<iostream>
#include<map>
#include<string>

int main(){
  std::cout << "Hello world!\n";
  std::map<char,char> BASEPAIRS;
  BASEPAIRS = {{ 'A', '1' },   { 'B', '2' }, { 'C', '3'}}; 
  std::cout << BASEPAIRS['A'] << std::endl;

  return 0;
};
