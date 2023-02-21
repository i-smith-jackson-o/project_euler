// Find the sum of all primes below two million 
#include <iostream>

bool isPrime(int n) {
  if (n == 0 || n == 1) return false; 
  for (int i = 2; i < n; ++i){
    if (n % i == 0)
      return false; 
  }
  return true; 
}

int main() {
  int MAX = 2000000; 
  unsigned long long sum = 0; 
  for (int i = 2; i < MAX; ++i) {
    if (isPrime(i)) {
      sum += i; 
    }
  }

  std::cout << sum << std::endl; 
  return 0; 
}
