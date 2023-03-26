#include <stdio.h>

int test26(void){
	/*
	char str[80] = "Apple Juice";
	char* ps = "banana";
	puts(str);
	fputs(ps, stdout);
	puts("milk");
	return 0;
	*/

	int i = 0;
	char str[20];
	char ch;
	do {
		ch = getchar();
		str[i] = ch;
		i++;
	} while (ch != '\n');
	str[i] = '\0';
	printf("%s", str);
	return 0;
	
}