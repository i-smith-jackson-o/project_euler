// Special pythagorean triplet
// A set of three natural numbers a < b < c for which: 
//    a^2 + b^2 = c^2
// There exists exactly one pythagorean triplet for which a + b + c = 1000 
// find the product abc
#include <iostream>

int output(int a, int b, int c) {
  return a * b * c; 
}

int main() {
  int s = 1000; 

  for (int a = 3; a <= (s-3)/3; ++a) {
    for (int b = (a + 1); b < (s-1-a)/2; ++b){
      int c = s - a - b; 
      if (c*c == a*a + b*b)
	std::cout << output(a,b,c) << std::endl; 
    }
  }
  return 0; 
}
