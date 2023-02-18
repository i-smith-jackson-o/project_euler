#include <iostream>

int main() {
  unsigned long long n = 100; 
  unsigned long long sum {}; 
  unsigned long long sumSquares {}; 

  for (int i = 0; i <= n; i++) {
    sumSquares += i * i; 
  }

  for (int i = 0; i <= n; ++i) {
    sum += i; 
  }

  std::cout << (sum * sum) - sumSquares << std::endl; 
  return 0; 
}


