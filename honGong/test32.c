#include <stdio.h>

int* sum(int a, int b);
int main(void) {
	int* resp;
	resp = sum(30, 50); // = &res;
	printf("�� ������ �� : %d", *resp);
	return 0;
}

int* sum(int a, int b) {
	static int res;
	res = a + b;
	return &res;
}