#include <stdio.h>

int test67(void) {
	short** p1 = 8000;
	short** p2 = 0;
	printf("%d", p1 - p2);
	return 0;
}