//void ������

#include <stdio.h>

int main(void) {
	int a = 10;
	double b = 3.5;
	void* vp; // ����Ű�� �ڷ����� �������� ����
	vp = &a;
	printf("a : %d\n", *(int*)vp); // �׶��׶� ��ȯ��
	vp = &b;
	printf("b: %.1lf\n", *(double*)vp);
	return 0;
}