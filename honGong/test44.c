#include <stdio.h>

void print_str(char** pps, int cnt);
int test45(void) {
	char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" }; // ������ �迭 �ʱ�ȭ
	int count; // �迭 ��� ���� ������ ����

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]); // �迭 ��� �� ���
	print_str(ptr_ary, count); // ������ �迭�� �ּҰ��� �Ѱ���
	return 0;
}
void print_str(char** pps, int cnt) {
	int i;
	for (i = 0; i < cnt; i++) {
		printf("%u\n", &pps[i]); // ���� �����͸� �迭��ó�� ���
		//{aaaaa ,bbbb, cccc, dddd} 
		// {'t', 'i', 'g', 'e', 'r'}
	}
}
