#include <stdio.h>

int n;
int rec_func();
int test11(void) {
	int result;
	
	n = 10;
	result = rec_func();
	printf("%d", result);

	return 0;
}
int rec_func() {
	if (n == 0) return 0;
	int tmp = n--;
	return tmp + rec_func();
}
