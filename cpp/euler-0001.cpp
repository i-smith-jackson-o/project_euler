/*If we list all the natural numbers below 10 that are multiples
of 3 or 5, we get 3, 5, 6, and 9. the sum of these multiples is 23. 
Find the sum of all the multiples of 3 or 5 below 1000. 
*/
#include <iostream>

int main () {
  int n = 0, sum = 0, max = 1000; 

  while(n < max) {
    if ((n % 3 == 0) || (n % 5 == 0)) {
	sum += n; 
    }
    ++n; 
  }
  std::cout << sum << std::endl; 
  return 0; 
}
