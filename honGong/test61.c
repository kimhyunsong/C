/*#define _CRT_SECURE_NO_WARNINGS
#define INF 0x7fffffff
#include <stdio.h>
#include <stdlib.h>
typedef struct _Point {
    int r, c;
} point;

int N, M, K;
int arr[10][10];
int arr2[10][10];
int visit[10][10];
int equip[10][10];
point path[10][10];
point Q[100];
int row[4] = { 0, 1, 0, -1 };
int col[4] = { 1, 0, -1, 0 };
void print();

void run(int);
int get_max();
int countTower();
point findTower(int);
point findEnemy();
void attack(point, int);
void repair(int);
int lazer(point, point);
void missile(int, point, point, int);


int test62(void) {
    scanf("%d%d%d", &N, &M, &K);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 1; i <= K; i++) {
        run(i);
    }
    printf("%d\n", get_max());

    return 0;
}

void run(int turn) {
    
    //0. 포탑개수가 1이라면 즉지 중지
    if (countTower() == 1) return;
    //1. 포탑 찾기
    point tower = findTower(turn);
    //2. 공격
    attack(tower, turn);

    repair(turn);


}


int get_max() {
    int value = -INF;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (value <= arr[i][j]) value = arr[i][j];
        }
    }
    return value;
}


int countTower() {
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] > 0) count++;
        }
    }
    return count;
}

point findTower(int turn) {
    int STRENGTH = INF;
    point tower;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] <= 0)continue;
            if (arr[i][j] > STRENGTH) continue;
            if (arr[i][j] < STRENGTH) {
                STRENGTH = arr[i][j];
                tower.r = i;
                tower.c = j;
                continue;
            }
            if (arr2[tower.r][tower.c] > arr2[i][j]) continue;
            if (arr2[tower.r][tower.c] < arr2[i][j]) {
                STRENGTH = arr[i][j];
                tower.r = i;
                tower.c = j;
                continue;
            }
            if (tower.r + tower.c > i + j) continue;
            if (tower.r + tower.c < i + j) {
                STRENGTH = arr[i][j];
                tower.r = i;
                tower.c = j;
                continue;
            }
            if (tower.c > j)continue;
            STRENGTH = arr[i][j];
            tower.r = i;
            tower.c = j;
        }
    }
    arr2[tower.r][tower.c] = turn;
    equip[tower.r][tower.c] = turn;
    return tower;
}

void attack(point tower, int turn) {
    point enemy;
    enemy = findEnemy();
    arr[tower.r][tower.c] += N + M;
    int STRENGTH = arr[tower.r][tower.c];
    if (lazer(tower, enemy)) {
        point temp_tower = enemy;
        arr[temp_tower.r][temp_tower.c] -= STRENGTH;
        equip[temp_tower.r][temp_tower.c] = turn;
        int r = path[temp_tower.r][temp_tower.c].r;
        int c = path[temp_tower.r][temp_tower.c].c;
        temp_tower.r = r, temp_tower.c = c;
        while (temp_tower.r != tower.r || temp_tower.c != tower.c) {
            equip[temp_tower.r][temp_tower.c] = turn;
            arr[temp_tower.r][temp_tower.c] -= STRENGTH / 2;
            int r = path[temp_tower.r][temp_tower.c].r;
            int c = path[temp_tower.r][temp_tower.c].c;
            temp_tower.r = r, temp_tower.c = c;
        }
        return;
    } 
    missile(STRENGTH, tower, enemy, turn);
    return;
}

point findEnemy() {
    int STRENGTH = -INF;
    point tower;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] <= 0)continue;
            if (arr[i][j] < STRENGTH) continue;
            if (arr[i][j] > STRENGTH) {
                STRENGTH = arr[i][j];
                tower.r = i;
                tower.c = j;
                continue;
            }
            if (arr2[tower.r][tower.c] < arr2[i][j]) continue;
            if (arr2[tower.r][tower.c] > arr2[i][j]) {
                STRENGTH = arr[i][j];
                tower.r = i;
                tower.c = j;
                continue;
            }
            if (tower.r + tower.c < i + j) continue;
            if (tower.r + tower.c > i + j) {
                STRENGTH = arr[i][j];
                tower.r = i;
                tower.c = j;
                continue;
            }
            if (tower.c < j)continue;
            STRENGTH = arr[i][j];
            tower.r = i;
            tower.c = j;
        }
    }
    return tower;
}

int lazer(point tower, point enemy) {
    static int v;
    v++;
    int s = 0, e = 0;
    visit[tower.r][tower.c] = v;
    Q[e] = tower, e++;
    while (s != e) {
        point p_tower = Q[s];
        s++;
        for (int i = 0; i < 4; i++) {
            point n_tower;
            n_tower.r = p_tower.r + row[i], n_tower.c = p_tower.c + col[i];
            if (n_tower.r >= N) n_tower.r -= N;
            if (n_tower.c >= M) n_tower.c -= M;
            if (n_tower.r < 0) n_tower.r += N;
            if (n_tower.c < 0) n_tower.c += M;
            if (arr[n_tower.r][n_tower.c] <= 0)continue;
            if (visit[n_tower.r][n_tower.c] == v) continue;
            visit[n_tower.r][n_tower.c] = v;
            path[n_tower.r][n_tower.c] = p_tower;
            Q[e] = n_tower, e++;
        }   
    }
    if (visit[enemy.r][enemy.c] != v) return 0;
    return 1;


}

void missile(int STRENGTH, point tower, point enemy, int turn) {
    for (int i = -1; i < 2; i++) {
        for (int j = -1; j < 2; j++) {
            if (i == 0 && j == 0)
            {
                equip[enemy.r][enemy.c] = turn;
                arr[enemy.r][enemy.c] -= STRENGTH;
                continue;
            }
            int r = enemy.r + i;
            int c = enemy.c + j;
            if (r < 0) r += N;
            if (r >= N) r -= N;
            if (c < 0) c += M;
            if (c >= M) c -= M;
            if (tower.r == r && tower.c == c) continue;
            equip[r][c] = turn;
            arr[r][c] -= STRENGTH / 2;
        }
    }
    
}

void repair(int turn) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (equip[i][j] != turn) {
                if (arr[i][j] <= 0) continue;
                arr[i][j] += 1;
            }
        }
    }
}
*/