#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int countDivisors(int n) {
	int numDivisors = 2;
	int i;
	for (i = 2; i < sqrt(n); i++) {
		if (n % i == 0) {
			numDivisors += 2;
		}
	}
	if (i * i == n) {
		numDivisors++;
	}
	return numDivisors;
}

int main() {
	int currentTriangleNum = 0;
	int next = 1;
	while (countDivisors(currentTriangleNum) < 500) {
		currentTriangleNum += next;
		next++;
	}
	printf("Answer = %i. Divisors = %i\n", currentTriangleNum, countDivisors(currentTriangleNum));
}
