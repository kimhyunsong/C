#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int test25(void) {
	/*
	int num, grade;

	printf("�й� �Է� : ");
	scanf("%d", &num);
	//getchar();
	printf("���� �Է� : ");
	grade = getchar();
	printf("�й� : %d, ���� : %c", num, grade);
	*/
	/*
	int ch;
	int cnt = 0;
	ch = getchar();
	while (ch != '\n') {
		if ((ch >= 'a') && (ch <= 'z'))cnt++;
		ch = getchar();
	}
	printf("%d", cnt);
	

	char str[80];
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("ù ��° �ܾ� : %s\n", str);
	scanf("%s", str);
	printf("���ۿ� �����ִ� �ܾ� : %s\n", str);
	*/

	char str[80];
	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';
	printf("�Էµ� ���ڿ��� %s�Դϴ� \n", str);

	return 0;
}