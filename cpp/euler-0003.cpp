/*
find the largest prime factor of a composite number. 
*/
#include <iostream>

int main() {
  unsigned long long x = 600851475143; 

  for (unsigned long long factor = 2; factor * factor <= x; factor++)  {
    while (x % factor == 0 && x != factor) {
      x /= factor; 
    }
  }
  std::cout << x << std::endl;   
}