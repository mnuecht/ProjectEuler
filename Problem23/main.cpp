#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
using namespace std;

// Maximum value that is not the sum of two abundant numbers
#define MAX_VAL 28123

bool is_abundant(int n) {
	int sum = 1;
	int i;
	for (i = 2; i < sqrt(n); ++i) {
		if (n % i == 0) {
			sum += i;
			sum += (n / i);
		}
	}
	if (i * i == n) sum += i;
	return sum > n;
}

vector<int> abundant_numbers;

void populate_abundant() {
	for (int i = 1; i < MAX_VAL; ++i) {
		if (is_abundant(i)) abundant_numbers.push_back(i);
	}
}

void print_abundant() {
	for (auto i: abundant_numbers) {
		printf("%i\n", i);
	}
}

bool is_abundant_sum(int n) {
	for (int i = 0; i < abundant_numbers.size(); ++i) {
		for (int j = i; j < abundant_numbers.size(); ++j) {
			if (abundant_numbers[i] + abundant_numbers[j] == n) return true;
		}
	}
	return false;
}

int main() {
	populate_abundant();
	unsigned long int sum = 0;
	for (int i = 1; i <= MAX_VAL; ++i) {
		if (!is_abundant_sum(i)) {
			sum += i;
			printf("found non_abundant_sum: %i\n", i);
		}
	}
	printf("sum = %lu\n", sum);
}
