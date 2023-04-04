#include <stdio.h>
// 활용 1. 포인터 값을 바꾸는 함수의 매개변수로 사용
void swap_ptr(char** ppa, char** ppb);

int test44(void) {
	char* pa = "success"; // 변수에 값을 집어넣음
	char* pb = "failure";
	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb); // pa 포인터와 pb 포인터가 가리키는 주소값을 서로 바꿔준다.
	printf("pa -> %s, pb -> %s\n", pa, pb);
	return 0;
}

void swap_ptr(char** ppa, char** ppb) {
	char* pt;
	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}