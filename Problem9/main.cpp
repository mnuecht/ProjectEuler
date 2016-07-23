#include <stdlib.h>
#include <stdio.h>
using namespace std;

#define RESULT 1000

bool isPythTriplet(int a, int b, int c) {
	return (a * a == b * b + c * c);
}

int main() {
	for (int a = 1; a <= RESULT; a++) {
		for (int b = 1; b <= RESULT - a; b++) {
			int c = RESULT - a - b;
			if (isPythTriplet(a, b, c)) {
				printf("a = %i, b = %i, c = %i\n", a, b, c);
				printf ("Product = %i\n", a * b * c);
				return 0;
			}
		}
	}
	printf("No result found.\n");
}
