#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {
	char name[20];
	int age;
	double height;
	char* intro;
};

int test58(void) {
	struct profile Ddosong;

	strcpy(Ddosong.name, "김현송"); // name 멤버 배열에 문자열 복사
	Ddosong.age = 28;
	Ddosong.height = 170.2;
	Ddosong.intro = (char*)malloc(80);
	printf("자기 소개 : ");
	gets(Ddosong.intro);

	printf("이름 : %s\n", Ddosong.name);
	printf("나이 : %d\n", Ddosong.age);
	printf("키 : %.2lf\n", Ddosong.height);
	printf("자기소개 : %s\n", Ddosong.intro);
	free(Ddosong.intro);
	return 0;
}