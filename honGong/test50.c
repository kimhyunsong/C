#include <stdio.h>
#include <stdlib.h>
int test51(void) {
	int* pi; // 여기서 인트랑 더블로 변수 타입 선언만으로도 메모리가 할당된건 아닌거?
	double* pd;
	pi = (int*)malloc(sizeof(int)); // 메모리 동적 할당 후 포인터 연결
	if (pi == NULL) {
		printf("# 메모리가 부족합니다.");
		exit(1);
	}
	pd = (double*)malloc(sizeof(double));
	*pi = 10;
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi);
	printf("실수형으로 사용 : %.1lf\n", *pd);

	free(pi); // 동적할당 영역 반환
	free(pd);
	return 0;

}