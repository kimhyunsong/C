#include <stdio.h>

void swap(int* pa, int* pb);
int test16(void) {
	/*
	int a = 10, b = 14, total;
	double avg;
	int* pa, * pb;
	int* pt = &total;
	double* pg = &avg;
	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;
	printf("%d, %d, %d, %.1lf", *pa, *pb, *pt, *pg);
	*/
	/*
	int a = 10, b = 20;
	const int* pa = &a;
	printf("%d\n", *pa);
	pa = &b;
	printf("%d\n", *pa);
	pa = &a;
	printf("%d\n", *pa);
	//
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d", a);
	*/

	int a = 10, b = 20;
	swap(&a, &b);
	printf("a:%d, b:%d\n", a, b);
	return 0;
}

void swap(int* pa, int* pb) {
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}