#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int tset9(void) {
	int a; 
	int b;
	char calc;
	printf("������ �Է��ϼ��� :");
	scanf("%d%c%d", &a, &calc, &b);
	printf("%c", calc);
	if (calc == '+') {
		printf("��� : %d", a + b);
	}
	else if (calc == '-') {
		printf("��� : %d", a - b);
	}
	else if (calc == '*') {
		printf("��� : %d", a * b);

	}
	else if (calc == '/') {
		printf("��� : %.1lf", (float)(a / b));
	}
	return 0;


}