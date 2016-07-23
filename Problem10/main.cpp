#include <stdlib.h>
#include <stdio.h>
#include <vector>
using namespace std;

#define MAX_NUM 2000000
vector<int> primes;

// Check if an ODD Number is prime
inline bool isPrime(unsigned int n) {
	for (auto it : primes) {
		if (it * it > n) {
			break;
		}
		if (n % it == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	for (unsigned int i = 3; i < MAX_NUM; i += 2) {
		if (isPrime(i)) {
			primes.push_back(i);
		}
	}
	
	// Total up the primes. Include 2, since we've been ignoring it.
	unsigned long total = 2;
	for (auto it : primes) {
		total += it;
	}
	printf("total = %lu\n", total);
}
