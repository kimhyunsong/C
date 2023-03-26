#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int test17(void) {
	int ary[3];
	int i;
	*(ary + 0) = 10; // 배열 첫번째 인덱스에 10 할당 나머지는 0 ,0
	*(ary + 1) = *(ary + 0) + 10; // ary[1] = ary[0] + 10
	printf("배열의 세 번째 요소 입력 : ");
	scanf("%d", ary + 2);

	for (i = 0; i < 3; i++) {
		printf("%5d", ary[i]);
	}
	return 0;
}