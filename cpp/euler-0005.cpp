/* 2520 is the smallest number than cam be divided by each of the numbers from 1-10 without
 * any remainder. 
 *
 * What is the smallest positive number that is evenly divisble by all of the numbers 
 * from 1 - 20? */

#include <functional>
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
  return largestPalindrome;
}
