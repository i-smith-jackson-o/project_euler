/*2520 is the smallest number that can be divided by each of the numbers 1 to 10 without 
 * any remainder. What is the smallest positive number that is evenly divisble by all of the 
 * numbers from 1 to 20?*/
// 232792560
#include <iostream>

static unsigned long long lcm_until(unsigned n) noexcept {
  auto r = 1UL; 
  for (auto i = 2UL; i <= n; ++i) {
    if (r % i) {
      auto x = i; 
      while (x * i <= n) 
	x *= i; 
      r *= x; 
    }
  }
  return r; 
}

int main() {
  std::cout << lcm_until(99) << std::endl; 
}
