#include <stdlib.h>
#include <stdio.h>
using namespace std;

#define MAX_NUM 4000000

int main() {
	int a = 1;
	int b = 2;
	int total = 0;
	
	int temp;
	while (b < MAX_NUM) {
		if (b % 2 == 0) {
			total += b;
		}
		temp = b;
		b = a + b;
		a = temp;
	}
	printf("%i\n", total);
}
