#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct _attck{
	int dir;
	int cnt;
} attack;
int idx = 0;
int temp_arr[625];
int temp_arr_cnt = 0;
int N, M;

int maze[25][25];

int direction[4][2] = { {0, 1},{1, 0},{0, -1},{-1 ,0} };
int direction2[4][2] = { {1, 0} ,{0, 1},{-1 ,0} ,{0, -1} };

int score = 0;

void print() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d ", maze[i][j]);
		}
		printf("\n");
	}
}

int run(attack);

void destroy(attack);

void pull(){
	idx = 0;
	int r = N / 2, c = N / 2;
	// 방향은 하우상좌
	for (int i = 1; i <= N / 2 ; i++) {
		r -= 1, c -= 1;
		for (int d = 0; d < 4; d++) {
			for (int j = 0; j < i * 2; j++) {
				r += direction2[d][0], c += direction2[d][1];
				if (maze[r][c] == 0) continue;
				temp_arr[idx++] = maze[r][c];
			}
		}
	}
	r = N / 2, c = N / 2;
	int idx2 = 0;
	for (int i = 1; i <= N / 2; i++) {
		r -= 1, c -= 1;
		for (int d = 0; d < 4; d++) {
			for (int j = 0; j < i * 2; j++) {
				r += direction2[d][0], c += direction2[d][1];
				if (idx2 < idx) maze[r][c] = temp_arr[idx2++];
				else maze[r][c] = 0;
			}
		}
	}
	temp_arr_cnt = idx2;
};

void recover() {
	int cnt = 0, tmp = 0;
	int idx4 = 0;
	int temp_arr2[625] = { 0 };
	for (int i = 0; i < temp_arr_cnt; i++) {
		
		if (tmp == 0) {
			tmp = temp_arr[i];
			cnt++;
			continue;
		}
		if (tmp != temp_arr[i]) {
			if (cnt > 0) {
				temp_arr2[idx4 * 2] = cnt;
				temp_arr2[idx4 * 2 + 1] = tmp;
			}
			cnt = 1;
			tmp = temp_arr[i];
		}
		else {
			cnt++;
		}
	}
	idx4++;

}
void del_maze4(int x, int y) {
	int r = N / 2, c = N / 2;
	int _cnt = 0;
	for (int i = 1; i <= N / 2; i++) {
		r -= 1, c -= 1;
		for (int d = 0; d < 4; d++) {
			for (int j = 0; j < i * 2; j++) {
				r += direction2[d][0], c += direction2[d][1];
				_cnt++;
				if (_cnt >= x && _cnt <= y) {
					score += maze[r][c];
					maze[r][c] = 0;
				}
			}
		}
	}
}
int checkMaze4() {
	int cnt = 0, tmp = 0;
	int key = 0;
	for (int i = 0; i < temp_arr_cnt; i++) {
		if (tmp == 0) {
			tmp = temp_arr[i];
			cnt++;
			continue;
		}
		if (tmp != temp_arr[i]) {
			if (cnt >= 4){
				del_maze4(i - cnt + 1, i);
				key = 1;
			}
			cnt = 1;
			tmp = temp_arr[i];
		}
		else {
			cnt++;
		}
	}
	if (cnt >= 4) {
		del_maze4(temp_arr_cnt - cnt + 1, temp_arr_cnt);
		key = 1;

	}
	return key;
}

int test65(void) {
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &maze[i][j]);
		}
	}
	for (int i = 0; i < M; i++) {
		attack temp_attack;
		scanf("%d%d", &temp_attack.dir, &temp_attack.cnt);
		run(temp_attack);

	}
	printf("%d", score);
	
	return 0;
}

run(attack atk) {
	destroy(atk);

	pull();

	while (checkMaze4()) {
		pull();		
	}
	print();
	recover();
}


void destroy(attack atk) {
	int sr = N / 2, sc = N / 2;
	for (int i = 0; i < atk.cnt; i++) {
		sr += direction[atk.dir][0], sc += direction[atk.dir][1];
		score += maze[sr][sc];
		maze[sr][sc] = 0;
	}

}