#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int test38(void) {
	/*
	char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]);

	for (i = 0; i < count; i++) {
		scanf("%s", animal[i]);
	}

	for (i = 0; i < count; i++) {
		printf("%s\n", animal[i]);
	}
	*/
	char animal1[5][10] = {
		{'d','o','g','\0'},
		{'t','i','g','e','r','\0'},
		{'r','a','b','b','i','t','\0'},
		{'h','o','r','s','e','\0'},
		{'c','a','t','\0'}
	};

	char animal2[][10] = { "dog","tiger","rabbit","horse", "cat" };
	int i;
	for (i = 0; i < 5; i++) {
		printf("%s ", animal1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		printf("%s ", animal2[i]);
	}





	return 0;
}