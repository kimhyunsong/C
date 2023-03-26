#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int test18(void) {
	/*
	int ary[3];
	int* pa = ary;
	int i;
	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];
	for (i = 0; i < 3; i++) {
		printf("%5d", pa[i]);
	}
	*/

	int ary[3] = { 10, 20, 30 };
	int* pa = ary;
	int i;
	for (i = 0; i < 3; i++) {
		printf("%d", *pa);
		pa++;
	}
	return 0;
}