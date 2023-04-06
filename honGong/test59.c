#include <stdio.h>

struct student {
	int id;
	char name[20];
	double grade;
};

int test60(void) {
	struct student  s1 = { 315, "유병재", 4.3 },
					s2 = { 316, "김동유", 4.4 },
					s3 = { 317, "박주윤", 4.5 };
	struct student max;
	max = s1;

	if (s2.grade > max.grade) max = s2;
	if (s3.grade > max.grade) max = s3;
	printf("학번 : %d\n", max.id);
	printf("이름 : %s\n", max.name);
	printf("학점 : %.1lf\n", max.grade);
	return 0;
					
}