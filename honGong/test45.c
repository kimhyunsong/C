// 주소로 쓰이는 배열명과 배열의 주소 비교

#include <stdio.h>

int test46(void) {
	int ary[5];
	printf("ary의 값: %u\t", ary); // 주소로서의 배열명의 값 
	printf("ary의 주소 : %u\t", &ary);
	printf("ary + 1: %u\t", ary + 1);
	printf(" &ary + 1: %u\y", &ary + 1);
	return 0;
	// ary 자체가 주소로 쓰일 때는 첫 번째 요소를 가리키므로 대상의 크기는 4가된다.
	// &ary 는 배열 전체를 가리키므로 가리키는 대상의 크기는 4*5 (20)이 된다.
}