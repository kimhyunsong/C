#include <stdio.h>

int fibo(int n);


int test12(void) {

	printf("%d", fibo(10));

	return 0;
}

int fibo(int n) {
	if (n <= 2) return 1;
	return fibo(n - 1) + fibo(n - 2);
}
