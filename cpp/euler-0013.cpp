#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "/opt/homebrew/include/gmp.h"

int main() {
  const int ARRAY_SIZE = 100; 
  //std::string nums[ARRAY_SIZE]; 
  mpz_t vec[ARRAY_SIZE]; 
  std::ifstream inputFile; 
  int count = 0; 
  int sum = 0; 

  inputFile.open("LargeSum.txt"); 

  while (count < ARRAY_SIZE && inputFile >> vec[count]) 
    count++; 

  inputFile.close(); 

  for (int i = 0; i < ARRAY_SIZE; i++) {
    std::cout <<  vec[i] << '\n'; 
  }

  std::cout << sum << std::endl; 
  return 0; 
}
