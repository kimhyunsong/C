#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int sum(int x, int y);
int get_num(void);
int test10(void) {
	int a = 0, b = 20;
	int result;

	result = sum(a, b);
	printf("%d", result);
	result = get_num();
	printf("%d", result);
	return 0;

}
int sum(int x, int y) {
	int temp;
	temp = x + y;
	return temp;
}

int get_num(void) {
	int num;
	printf(": ");
	scanf("%d", &num);
	return num;
}