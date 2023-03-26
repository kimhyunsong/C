#include <stdio.h>

int test7(void) {
	int res;
	int a = sizeof(short);
	int b = sizeof(long);
	res = a > b;
	(res == 1) ? printf("short") : printf("long");
	return 0;
}