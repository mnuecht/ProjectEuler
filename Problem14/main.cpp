#include <stdlib.h>
#include <stdio.h>
using namespace std;

#define MAX_NUM 1000000

int countChain(unsigned int n) {
	int count = 0;
	while (n > 1) {
		if (n % 2 == 0) {
			n /= 2;
		} else {
			n = 3 * n + 1;
		}
		count++;
	}
	return count;
}

int main() {
	unsigned int maxChain = 0;
	unsigned int maxNum = 0;
	for (unsigned int i = 0; i < MAX_NUM; i++) {
		unsigned int chainLen = countChain(i);
		if (chainLen > maxChain) {
			maxChain = chainLen;
			maxNum = i;
		}
	}
	printf("Longest chain for %u\n", maxNum);
}
