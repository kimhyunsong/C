#include <stdio.h>

int test22(void) {
	char small, cap = 'G';
	if ((cap >= 'A') && (cap <= 'Z')){
		small = cap + ('a' - 'A');
	}
	printf("�빮�� : %c %c", cap, '\n');
	printf("�ҹ��� : %c", small);
	return 0;
}