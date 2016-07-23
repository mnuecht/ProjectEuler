#include <stdlib.h>
#include <stdio.h>
using namespace std;

#define MAX_DIV 20

bool isDivisibleUpToN(unsigned int n) {
	for (unsigned int i = 2; i < MAX_DIV; i++) {
		if (n % i != 0) {
			return false;
		}
	}
	return true;
}

int main() {
	for (unsigned int i = MAX_DIV;; i += 20) {
		if (isDivisibleUpToN(i)) {
			printf("Solution = %i\n", i);
			return 0;
		}
	}
}
