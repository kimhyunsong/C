#include <stdio.h>

int main(int argc, char** argv) {
	int i;
	for (i = 0; i < argc; i++) { // 인수 개수만큼 반복
		printf("%s\n", argv[i]);
	}
	return 1;
}