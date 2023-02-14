#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int n) {
  int np = 0; 
  for (int r = n; r > 0; r /= 10) {
    np *= 10; 
    np += r % 10; 
  }
  return n == np; 
}

int main(void){
  int largestPalindrome = 0; 
  int max = 999; 
  for (int a = max; a >= 0; --a) {
    for (int b = max; b >= 0; --b) {
      if (isPalindrome(a*b) && a * b > largestPalindrome) {
        largestPalindrome = a * b; 
      }
    }
  }
  printf("%d\n", largestPalindrome); 
  return 0; 
}

