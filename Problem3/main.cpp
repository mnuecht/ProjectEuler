#include <stdlib.h>
#include <stdio.h>
using namespace std;

#define NUM 600851475143

bool isPrime(long n) {
	// Shortcut even numbers
	if (n % 2 == 0) {
		return false;
	}
	// Go through odd numbers
	for (unsigned long i = 3; i <= n/2; i += 2) {
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

int main() {
	unsigned long current = NUM;
	unsigned long max = 1;
	for (unsigned long i = 2; current > 1; i++) {
		if (isPrime(i)) {
			while (current % i == 0) {
				current /= i;
				max = i;
				//printf("divisor found [%lu]. current %lu\n", i, current);
			}
		}
	}
	printf("Max divisor = %lu\n", max);
}
