#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct profile {
	int age;
	double height;
};

struct student {
	struct profile pf;
	int id;
	double grade;
};

int test59(void) {
	struct student Ddosong;
	Ddosong.pf.age = 17;
	Ddosong.pf.height = 170.2;
	Ddosong.id = 250012;
	Ddosong.grade = 3.0;

	printf("���� : %d\n", Ddosong.pf.age);
	printf("���� : %.1lf\n", Ddosong.pf.height);
	printf("�й� : %d\n", Ddosong.id);
	printf("���� : %.1lf\n", Ddosong.grade);
	return 0;
}