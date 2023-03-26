#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int test15(void) {
	int i, count = 0;
	char str[6];
	gets(str);
	for (i = 0; i < sizeof(str) / sizeof(str[0]); i++) {
		if ((int)str[i] <= 90) {
			str[i] = (char)((int)str[i] + 32);
			count++;
		}
	}
	printf("%s %d", str, count);
	return 0;
}