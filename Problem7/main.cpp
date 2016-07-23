#include <stdlib.h>
#include <stdio.h>
using namespace std;

#define PRIME_N 10001

bool isPrime(int n) {
	if (n % 2 == 0) {
		return false;
	}
	for (int i = 3; i <= n/2; i += 2) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	//Start with one prime number : 2
	int totalPrimes = 1;
	int i = 3;
	while (true) {
		if (isPrime(i)) {
			if (++totalPrimes == PRIME_N) {
				break;
			}
		}
		i += 2;
	}
	printf("Prime %i = %i\n", PRIME_N, i);
}
