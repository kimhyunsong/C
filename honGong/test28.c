#include <stdio.h>

void assign10(void);
void assign20(void);

int a;

int test29(void) {
	printf("�Լ� ȣ�� �� a ��: %d\n", a);
	assign10();
	printf("�Լ� 1ȣ�� �� a ��: %d\n", a);
	assign20();
	printf("�Լ� 2ȣ�� �� a ��: %d\n", a);

	return -0;
}


void assign10(void) {
	a = 10;
}

void assign20(void) {
	int a;
	a = 20;
}