#include <math.h>
#include <stdio.h>

long maxFactor(long n) {
  double maxFactor = sqrt(n);
  int factor, lastFactor;

  if (n % 2 == 0) {
    lastFactor = 2;
    n = n / 2;
  } else {
    lastFactor = 1;
  }
  factor = 3;

  while (n > 1 && factor <= maxFactor) {
    if (n % factor == 0) {
      n = n / factor;
      lastFactor = factor;
      while (n % factor == 0) {
        n = n / factor;
        maxFactor = sqrt(n);
      }
    }
    factor = factor + 2;

    if (n == 1) {
      return lastFactor;
    } else {
      continue;
    }
  }
  return n;
}

int main(void) {
  long bigNum = 600851475143;
  printf("%lu\n", maxFactor(bigNum));
  return 0;
}
