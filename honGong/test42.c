#include <stdio.h>

int test43(void) {
	int a = 10; // int 형 변수의 선언과 초기화
	int* pi; // 포인터 선언
	int** ppi; // 이중 포인터 선언
	pi = &a; // int형 변수의 주소를 저장한 포인터
	ppi = &pi; //포인터의 주소를 저장한 이중 포인터

	printf("--------------------------------------------\n");
	printf("변수    변숫값    &연산    *연산     **연산 \n");
	printf("--------------------------------------------\n");
	printf("a%10d%10u\n", a, &a);
	printf("pi%10u%10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u", ppi, &ppi, *ppi, **ppi);
	return 0;
}