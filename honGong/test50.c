#include <stdio.h>
#include <stdlib.h>
int test51(void) {
	int* pi; // ���⼭ ��Ʈ�� ����� ���� Ÿ�� �������ε� �޸𸮰� �Ҵ�Ȱ� �ƴѰ�?
	double* pd;
	pi = (int*)malloc(sizeof(int)); // �޸� ���� �Ҵ� �� ������ ����
	if (pi == NULL) {
		printf("# �޸𸮰� �����մϴ�.");
		exit(1);
	}
	pd = (double*)malloc(sizeof(double));
	*pi = 10;
	*pd = 3.4;

	printf("���������� ��� : %d\n", *pi);
	printf("�Ǽ������� ��� : %.1lf\n", *pd);

	free(pi); // �����Ҵ� ���� ��ȯ
	free(pd);
	return 0;

}