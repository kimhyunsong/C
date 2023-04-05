// 동적 할당 영역에 저장한 문자열을 함수로 처리하는 예

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str2(char** ps);

int test55(void) {
	char temp[80];
	char* str[21] = { 0 };
	int i = 0;
	while (i < 20) {
		printf("문자열을 입력하세요 : ");
		gets(temp);
		if (strcmp(temp, "end") == 0) break;
		//메모리 할당
		str[i] = (char*)malloc(strlen(temp) + 1);
		// 후 복사
		strcpy(str[i], temp);
		i++;

	}
	print_str2(str);

	for (i = 0; str[i] != NULL; i++) {
		free(str[i]);
	}
	return 0;
}

// 배열명을 저장할 포인터를 매개변수로 선언함.
// 매개변수로 넘겨주는 배열명 str은 포인터 배열의 첫 번째 요소를 가리킴
void print_str2(char** ps) {
	while (*ps != NULL) {
		// 포인터 배열의 값이 NULL 포인터가 아닌 동안 반복
		// *ps
		printf("%s\n", *ps);
		ps++;
	}
}
