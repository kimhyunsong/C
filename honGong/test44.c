#include <stdio.h>

void print_str(char** pps, int cnt);
int test45(void) {
	char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" }; // 포인터 배열 초기화
	int count; // 배열 요소 수를 저장할 변수

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]); // 배열 요소 수 계산
	print_str(ptr_ary, count); // 포인터 배열의 주소값을 넘겨줌
	return 0;
}
void print_str(char** pps, int cnt) {
	int i;
	for (i = 0; i < cnt; i++) {
		printf("%u\n", &pps[i]); // 이중 포인터를 배열명처럼 사용
		//{aaaaa ,bbbb, cccc, dddd} 
		// {'t', 'i', 'g', 'e', 'r'}
	}
}
