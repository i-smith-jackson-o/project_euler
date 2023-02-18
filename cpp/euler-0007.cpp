// what is the 10,0001st prime number?
#include <iostream>
#include <vector>

bool isPrime(int n) {
  bool isPrime = true; 
  if (n == 0 || n == 1) isPrime = false; 
  for (int i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      isPrime = false; 
      break; 
    }
  }
  return isPrime; 
}

int main() {
  std::vector<int> primes {}; 


  return 0; 
}
