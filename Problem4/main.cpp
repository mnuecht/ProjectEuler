#include <stdlib.h>
#include <stdio.h>
#include <vector>
using namespace std;

#define MIN_NUM 100
#define MAX_NUM 999

bool isPalindrome(unsigned int n) {
	vector<int> digits;
	while (n > 0) {
		unsigned int remainder = n % 10;
		n /= 10;
		digits.push_back(remainder);
	}
	int i = 0;
	int size = digits.size();
	int pal = size - 1; // Digit from end corresponding to i
	while (i < size / 2) {
		if (digits[i] != digits[pal]) {
			return false;
		}
		i++;
		pal--;
	}
	return true;
}

int main() {
	unsigned int max = 0;
	// This could be optimized if MIN/MAX were higher.
	for (unsigned int a = MAX_NUM; a >= MIN_NUM; a--) {
		for (unsigned int b = MAX_NUM; b >= MIN_NUM; b--) {
			unsigned int product = a * b;
			if (isPalindrome(product)) {
				if (product > max) {
					max = product;
				}
			}
		}
	}
	printf("Max palindrome = %i\n", max);
}
