// what is the 10,0001st prime number?
#include <iostream>
#include <vector>

std::vector<int> primes {2}; 

bool isPrime(int n) {
  if (n == 0 || n == 1) return false; 
  for (int i = 2; i < n; ++i){
    if (n % i == 0)
      return false; 
  }
  return true; 
}

int pushPrime(int n) {
  for (int i = n + 1; ; ++i) {
    if (isPrime(i)) {
      primes.push_back(i); 
      return 1; 
    }
  }
}

int main() {
  int count = 10001; 
  for (int i = 2; i <= count; ++i) {
    pushPrime(primes[primes.size() - 1]); 
  }
  std::cout << primes[primes.size() - 1] << std::endl; 
  return 0; 
}
