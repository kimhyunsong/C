// ���� �Ҵ� ������ ������ ���ڿ��� �Լ��� ó���ϴ� ��

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
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);
		if (strcmp(temp, "end") == 0) break;
		//�޸� �Ҵ�
		str[i] = (char*)malloc(strlen(temp) + 1);
		// �� ����
		strcpy(str[i], temp);
		i++;

	}
	print_str2(str);

	for (i = 0; str[i] != NULL; i++) {
		free(str[i]);
	}
	return 0;
}

// �迭���� ������ �����͸� �Ű������� ������.
// �Ű������� �Ѱ��ִ� �迭�� str�� ������ �迭�� ù ��° ��Ҹ� ����Ŵ
void print_str2(char** ps) {
	while (*ps != NULL) {
		// ������ �迭�� ���� NULL �����Ͱ� �ƴ� ���� �ݺ�
		// *ps
		printf("%s\n", *ps);
		ps++;
	}
}
