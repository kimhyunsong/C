#include <stdio.h>

int main(int argc, char** argv) {
	int i;
	for (i = 0; i < argc; i++) { // �μ� ������ŭ �ݺ�
		printf("%s\n", argv[i]);
	}
	return 1;
}