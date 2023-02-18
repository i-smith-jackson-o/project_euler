#include <iostream>

int main() {
  int n = 100; 
  int sum {}; 
  int sumSquares {}; 

  for (int i = 0; i <= n; i++) {
    sumSquares += i * i; 
  }

  for (int i = 0; i <= n; ++i) {
    sum += i; 
  }

  std::cout << (sum * sum) - sumSquares << std::endl; 
  return 0; 
}


