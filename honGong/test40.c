#include <stdio.h>

int test41(void) {
	char* pary[5];
	int i;

	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";
	// char* pary[5] = {"dog", "elephant", "horse", "tiger", "lion"}
	for (i = 0; i < 5; i++) {
		printf("%s\n", pary[i]);
	}


	return 0;
}