#include <stdio.h>

void add_ten(int* pa);

int test32(void) {
	int a = 10;
	add_ten(&a);
	printf("%d", a);
	return 0;
}

void add_ten(int* pa) {
	*pa = *pa + 10;
}