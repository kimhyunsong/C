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

	strcpy(Ddosong.name, "������"); // name ��� �迭�� ���ڿ� ����
	Ddosong.age = 28;
	Ddosong.height = 170.2;
	Ddosong.intro = (char*)malloc(80);
	printf("�ڱ� �Ұ� : ");
	gets(Ddosong.intro);

	printf("�̸� : %s\n", Ddosong.name);
	printf("���� : %d\n", Ddosong.age);
	printf("Ű : %.2lf\n", Ddosong.height);
	printf("�ڱ�Ұ� : %s\n", Ddosong.intro);
	free(Ddosong.intro);
	return 0;
}