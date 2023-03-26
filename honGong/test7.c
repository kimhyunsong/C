#include <stdio.h>
int test8(void) {
	int chest = 95;
	char size;
	if (chest < 90) {
		size = 'S';
	}
	else if (chest > 90 && chest < 100) {
		size = 'M';
	}
	else {
		size = 'L';
	}
	printf("%c", size);
	return 0;

}