#include <stdio.h>
int test31(void) {
	register int i;
	auto long long sum = 0;
	for (i = 1; i <= 100000; i++) {
		sum += i;
	}
	printf("%lld", (long long)(sum));
	return 0;
}