/*2520 is the smallest number that can be divided by 
 * each of the numbers 1 to 10 without 
 * any remainder. What is the smallest positive number 
 * that is evenly divisble by all of the 
 * numbers from 1 to 20?*/
// 232792560
#include <iostream>
#include <vector>
#include <cstdint>
#include <cmath>

std::int64_t powint(std::int64_t base, int exp) {
  assert(exp >= 0 && "error"); 

  std::int64_t result { 1 }; 
  while (exp) {
    if (exp & 1)
      result *= base; 
    exp >>= 1; 
    base *= base; 
  }
  return result; 
}

int main() {
  std::vector<float> p {1,2,3,5,7,11,13,17,19,21}; 
  std::vector<float> a {0}; 

  int k = 20; 
  unsigned long long N = 1; 
  int i = 1; 
  bool check = true; 
  float limit = sqrt(k); 

  while (p[i] <= k) {
    a.push_back(1); 
    if (check) {
      if (p[i] <= limit) { 
	a[i] = floor( log(k) / log(p[i]) ); 
      } else
	check = false; 
      }
    N = N * powint(p[i], a[i]);  
    ++i;
  }
  std::cout << N << std::endl; 
  return 0; 
}
