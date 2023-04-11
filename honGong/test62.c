#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;
int work[20][20];
int workSelection[10];
int workSelection2[10];
int findIntensity();
int run();
void choice(int, int, int);
int answer = 0x7fffffff;

int main(void) {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &work[i][j]);
		}
	}
	run();
	printf("%d", answer);
	return 0;
}

int run() {
	choice(0, 0, 0);
}

void choice(int depth, int idx, int s) {
	if (depth == n / 2) {
		int temp = findIntensity();
		if (answer > temp) answer = temp;
		
		return;
	} 
	for (int i = s; i < n; i++) {
		workSelection[idx] = i;
		choice(depth + 1, idx + 1, i + 1);
	}
	
}


int findIntensity() {
	// workSelection에서 두 가지 일 선택
	int morning_time =0, night_time =0;
	int visit[20] = { 0 };
	for (int i = 0; i < n / 2; i++) {
		visit[workSelection[i]] = 1;
		for (int j = i + 1; j < n / 2; j++) {
			morning_time += work[workSelection[i]][workSelection[j]];
			morning_time += work[workSelection[j]][workSelection[i]];
		}
	}
	int idx = 0;
	for (int i = 0; i < n; i++) {
		if (visit[i] == 1)continue;
		workSelection2[idx++] = i;
	}
	for (int i = 0; i < n / 2; i++) {
		for (int j = i + 1; j < n / 2; j++) {
			night_time += work[workSelection2[i]][workSelection2[j]];
			night_time += work[workSelection2[j]][workSelection2[i]];
		}
	}

	


	if (morning_time - night_time < 0) return -(morning_time - night_time);
	return morning_time - night_time;
}
