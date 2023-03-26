#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int tset9(void) {
	int a; 
	int b;
	char calc;
	printf("수식을 입력하세요 :");
	scanf("%d%c%d", &a, &calc, &b);
	printf("%c", calc);
	if (calc == '+') {
		printf("결과 : %d", a + b);
	}
	else if (calc == '-') {
		printf("결과 : %d", a - b);
	}
	else if (calc == '*') {
		printf("결과 : %d", a * b);

	}
	else if (calc == '/') {
		printf("결과 : %.1lf", (float)(a / b));
	}
	return 0;


}