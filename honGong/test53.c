#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test54(void) {
	char temp[80];
	char* str[3]; // 동적 할당 영역을 연결할 포인터 배열
	int i;
	for (i = 0; i < 3; i++) {
		printf("문자열을 입력하세요 : ");
		// 문자열 입력받음
		gets(temp);
		// 입력받은 문자열의 길이 + 1 만큼의 저장공간 할당 최대 81자
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp); // 동적 할당 영역에 문자열 복사
		// strcpy 함수
		/*
		* char* strcpy(char* dest, const char* origin)
		* origin에 있는 문자열 전체를 dest로 복사하는 함수
		*/
	}

	for (i = 0; i < 3; i++) {
		printf("%s\n", str[i]);
	}
	for (i = 0; i < 3; i++) {
		free(str[i]); // 동적 할당 영역 반환
	}
	return 0;
}