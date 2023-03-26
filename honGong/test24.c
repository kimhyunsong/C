#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int test25(void) {
	/*
	int num, grade;

	printf("학번 입력 : ");
	scanf("%d", &num);
	//getchar();
	printf("학점 입력 : ");
	grade = getchar();
	printf("학번 : %d, 학점 : %c", num, grade);
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
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("첫 번째 단어 : %s\n", str);
	scanf("%s", str);
	printf("버퍼에 남아있는 단어 : %s\n", str);
	*/

	char str[80];
	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';
	printf("입력된 문자열은 %s입니다 \n", str);

	return 0;
}