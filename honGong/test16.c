#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int test17(void) {
	int ary[3];
	int i;
	*(ary + 0) = 10; // �迭 ù��° �ε����� 10 �Ҵ� �������� 0 ,0
	*(ary + 1) = *(ary + 0) + 10; // ary[1] = ary[0] + 10
	printf("�迭�� �� ��° ��� �Է� : ");
	scanf("%d", ary + 2);

	for (i = 0; i < 3; i++) {
		printf("%5d", ary[i]);
	}
	return 0;
}