// �ּҷ� ���̴� �迭��� �迭�� �ּ� ��

#include <stdio.h>

int test46(void) {
	int ary[5];
	printf("ary�� ��: %u\t", ary); // �ּҷμ��� �迭���� �� 
	printf("ary�� �ּ� : %u\t", &ary);
	printf("ary + 1: %u\t", ary + 1);
	printf(" &ary + 1: %u\y", &ary + 1);
	return 0;
	// ary ��ü�� �ּҷ� ���� ���� ù ��° ��Ҹ� ����Ű�Ƿ� ����� ũ��� 4���ȴ�.
	// &ary �� �迭 ��ü�� ����Ű�Ƿ� ����Ű�� ����� ũ��� 4*5 (20)�� �ȴ�.
}