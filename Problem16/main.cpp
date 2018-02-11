#include <stdlib.h>
#include <stdio.h>
#include <vector>
using namespace std;

int8_t val[10000];

// input must be single digit
void mult_by(int n) {
	int carry = 0;
	for (auto i : val) {
		int result = i * n;
		if (result >= 10) {
			
		}
	}
}

void build_val(int power) {
	for (auto i : val) i = 0;
	val[sizeof val - 1] = 1;
	for (int i = 0; i < power; ++i) mult_by(2);
	printf("val = ");
	for (auto i : val) {
		printf("%i", i);
	}
	printf("\n");
}

int main() {
	build_val(1000);
	unsigned long sum = 0;
	for (auto i : val) {
		sum += i;
	}
	printf("sum = %lu\n", sum);
}
