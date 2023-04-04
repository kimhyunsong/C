//void 포인터

#include <stdio.h>

int main(void) {
	int a = 10;
	double b = 3.5;
	void* vp; // 가리키는 자료형이 결정되지 않음
	vp = &a;
	printf("a : %d\n", *(int*)vp); // 그때그때 변환함
	vp = &b;
	printf("b: %.1lf\n", *(double*)vp);
	return 0;
}