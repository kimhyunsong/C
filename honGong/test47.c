#include <stdio.h>

int sum2(int a, int b);
int test48(void) {
	int (*fp)(int, int);
	int res;
	// function pointer�� function �ּҰ� ����
	fp = sum2;
	res = (*sum2)(10, 20); // fp(10, 20)
	printf("result : %d\n", res);
	return 0;
}
int sum2(int a, int b) {
	return a + b;
}