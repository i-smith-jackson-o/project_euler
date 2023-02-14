#include <stdio.h>

unsigned long fibonacciSum(int max) {
    long sum = 0; 
    int last = 1, prev = 0, next, i; 
    do {
	next = prev + last; 
	if (next % 2 == 0) {
	    sum = sum + next; 
	}
	prev = last; 
	last = next; 
    } while (next < max); 

    return sum; 
}

int main(void) {
    long max = 4000000; 

    printf("%lu", fibonacciSum(max)); 
    return 0; 
}
