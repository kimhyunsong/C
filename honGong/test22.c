#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int test23(void) {
	/*
	int ch;
	ch = getchar();
	printf("입력한 문자 : ");
	putchar(ch);
	putchar('\n');
	*/

	/*
	char ch;
	int i;
	for (i = 0; i < 3; i++) {
		scanf("%c", &ch);
		printf("%c", ch);
	}
	*/

	int res;
	char ch;

	while (1) {
		res = scanf("%c", &ch);
		if (res == -1) break;
		printf("%d", ch);
	}
	return 0;
}