#include <iostream>
#include <algorithm>

int reverse(int n) {
  int reversed = 0; 
  while (n > 0) {
    reversed = 10*reversed + n % 10; 
    n = n/10; 
  }
  return reversed; 
}

bool isPalindrome(int n) {
  return n = reverse(n); 
}

int main() {
  int largestPalindrome = 0; 
  int a = 100; 
  while (a <= 999) {
    int b = 100; 
    while (b <= 999) {
      if (isPalindrome(a * b) && a * b > largestPalindrome) {
	      largestPalindrome = a * b; 
      }
      ++b; 
    }
    ++a; 
  }
  std::cout << largestPalindrome << std::endl; 
  return 0;
}

