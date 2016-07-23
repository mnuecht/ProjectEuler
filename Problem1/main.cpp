#include <stdlib.h>
#include <stdio.h>
using namespace std;

#define DIV1 3
#define DIV2 5
#define MAX_NUM 1000

int main() {
	int total = 0;
	for (int i = 0; i < MAX_NUM; i++) {
		if (i % DIV1 == 0 || i % DIV2 == 0) {
			total += i;
		}
	}
	printf("%i\n", total);
}
