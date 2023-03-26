#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int test3(void) {
	int a;
	int b, c;
	char ch;
	double da;
	a = 10;
	b = a;
	c = a + 20;
	
	//printf("%d", sizeof(long long));

	char* sibal = "fqenfqkjwn";
	sibal = "123nujik21n";
	char fruit[20] = "strawberry";
	//fruit = sibal;X
	printf("µþ±â : %s\n", fruit);
	printf("µþ±âÂ´ : %s %s\n", sibal, "jam");
	strcpy(fruit, "Banana");
	printf("%s\n", fruit);
	

	return 0;
}