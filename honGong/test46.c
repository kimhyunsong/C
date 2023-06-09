#include <stdio.h>

int test47(void) {
	int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int(*pa)[4]; // int 형 변수 4개의 배열을 가리키는 포인터
	int i, j;
	pa = ary;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", pa[i][j]); // pa에 담긴 주소( 포인터를 ) 2차원처럼 사용
		}
		printf("\n");
	}
	printf("%u\t%u\t%u\t%u\t%u\t", &ary, ary, &ary[0], ary[0], &ary[0][0]);
	// 전부 다 같은 값이다.
	/*
		1. 2차원 배열 전체의 주소  (4바이트 * 3* 4 = 48바이트)
		2. 첫 번째 부분배열의 주소
		3. 첫 번째 부분배열의 주소 (4바이트)
		4. 첫 번째 부분배열의 첫 번째 배열 요소의 주소 (4 * 4바이트)
		5. 첫 번째 부분배열의 첫 번째 배열 요소의 주소 (4바이트)
	*/

	return 0;

}

