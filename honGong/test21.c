#include <stdio.h>

int test22(void) {
	char small, cap = 'G';
	if ((cap >= 'A') && (cap <= 'Z')){
		small = cap + ('a' - 'A');
	}
	printf("대문자 : %c %c", cap, '\n');
	printf("소문자 : %c", small);
	return 0;
}