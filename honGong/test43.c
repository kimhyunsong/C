#include <stdio.h>
// Ȱ�� 1. ������ ���� �ٲٴ� �Լ��� �Ű������� ���
void swap_ptr(char** ppa, char** ppb);

int test44(void) {
	char* pa = "success"; // ������ ���� �������
	char* pb = "failure";
	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb); // pa �����Ϳ� pb �����Ͱ� ����Ű�� �ּҰ��� ���� �ٲ��ش�.
	printf("pa -> %s, pb -> %s\n", pa, pb);
	return 0;
}

void swap_ptr(char** ppa, char** ppb) {
	char* pt;
	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}