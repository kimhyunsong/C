#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int test14(void) {
	/*
	char str1[80] = "cat";
	char str2[80];
	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);
	*/
	char str[80];
	printf("���ڿ� �Է� : ");
	gets(str);
	puts("�Էµ� ���ڿ� : ");
	puts(str);

	return 0;
}