#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test54(void) {
	char temp[80];
	char* str[3]; // ���� �Ҵ� ������ ������ ������ �迭
	int i;
	for (i = 0; i < 3; i++) {
		printf("���ڿ��� �Է��ϼ��� : ");
		// ���ڿ� �Է¹���
		gets(temp);
		// �Է¹��� ���ڿ��� ���� + 1 ��ŭ�� ������� �Ҵ� �ִ� 81��
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp); // ���� �Ҵ� ������ ���ڿ� ����
		// strcpy �Լ�
		/*
		* char* strcpy(char* dest, const char* origin)
		* origin�� �ִ� ���ڿ� ��ü�� dest�� �����ϴ� �Լ�
		*/
	}

	for (i = 0; i < 3; i++) {
		printf("%s\n", str[i]);
	}
	for (i = 0; i < 3; i++) {
		free(str[i]); // ���� �Ҵ� ���� ��ȯ
	}
	return 0;
}