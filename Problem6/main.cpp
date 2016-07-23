#include <stdlib.h>
#include <stdio.h>
using namespace std;

#define MAX_NUM 100

int main() {
	unsigned int sum_of_square = 0;
	unsigned int square_of_sum = 0;
	for (unsigned int i = 1; i <= MAX_NUM; i++) {
		sum_of_square += (i * i);
		square_of_sum += i;
	}
	square_of_sum = square_of_sum * square_of_sum;
	printf("sum_of_square = %u\n", sum_of_square);
	printf("square_of_sum = %u\n", square_of_sum);
	printf("Solution: %u\n", square_of_sum - sum_of_square);
}
