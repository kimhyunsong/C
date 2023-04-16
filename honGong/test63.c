/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct _Point {
    int r, c;
} point;

const int INF = 0x7fffffff;
const int dr[4] = { 0, +1, 0, -1 };
const int dc[4] = { +1, 0, -1, 0 };
int N, M, K;
int power[10][10];
int rec[10][10];
int visit[10][10];
int atk[10][10];
point path[10][10];
point Q[100];

int get_max() {
    int max = -INF;
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < M; c++) {
            if (power[r][c] > max) max = power[r][c];
        }
    }
    return max;
}
int count_tower() {
    int count = 0;
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < M; c++) {
            if (power[r][c]) count++;
        }
    }
    return count;
}
point find_src(int turn) {
    int min_power = INF;
    point src;
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < M; c++) {
            if (!power[r][c])continue;
            if (power[r][c] > min_power) continue;
            if (power[r][c] < min_power) {
                min_power = power[r][c];
                src.r = r, src.c = c;
                continue;
            }
            if (rec[r][c] < rec[src.r][src.c]) continue;
            if (rec[r][c] > rec[src.r][src.c]) {
                src.r = r, src.c = c;
                continue;
            }
            if (r + c < src.r + src.c) continue;
            if (r + c > src.r + src.c) {
                src.r = r, src.c = c;
                continue;
            }
            if (c < src.c)continue;
            src.r = r, src.c = c;
        }
    }
    rec[src.r][src.c] = atk[src.r][src.c] = turn;
    return src;
}
point find_desc(int turn) {
    int max_power = -INF;
    point desc;
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < M; c++) {
            if (!power[r][c])continue;
            if (power[r][c] < max_power) continue;
            if (power[r][c] > max_power) {
                max_power = power[r][c];
                desc.r = r, desc.c = c;
                continue;
            }
            if (rec[r][c] > rec[desc.r][desc.c]) continue;
            if (rec[r][c] < rec[desc.r][desc.c]) {
                desc.r = r, desc.c = c;
                continue;
            }
            if (r + c > desc.r + desc.c) continue;
            if (r + c < desc.r + desc.c) {
                desc.r = r, desc.c = c;
                continue;
            }
            if (c > desc.c)continue;
            desc.r = r, desc.c = c;
        }
    }
    atk[desc.r][desc.c] = turn;
    return desc;
}
int lazer(point src, point desc, int turn) {
    static int v;
    v++;
    int s = 0, e = 0;
    visit[src.r][src.c] = v;
    Q[e] = src, e++;
    while (s != e) {
        point p_tower = Q[s];
        s++;
        for (int i = 0; i < 4; i++) {
            point n_tower;
            n_tower.r = p_tower.r + dr[i], n_tower.c = p_tower.c + dc[i];
            if (n_tower.r < 0) n_tower.r += N;
            if (n_tower.r >= N) n_tower.r -= N;
            if (n_tower.c < 0) n_tower.c += M;
            if (n_tower.c >= M) n_tower.c -= M;
            if (!power[n_tower.r][n_tower.c])continue;
            if (visit[n_tower.r][n_tower.c] == v) continue;
            visit[n_tower.r][n_tower.c] = v;
            Q[e] = n_tower, e++;
            path[n_tower.r][n_tower.c] = p_tower;
        }
    }
    if (visit[desc.r][desc.c] != v) return 0;
    int r = path[desc.r][desc.c].r, c = path[desc.r][desc.c].c;
    while (r != src.r || c != src.c) {
        power[r][c] -= power[src.r][src.c] / 2;
        atk[r][c] = turn;
        int nr = path[r][c].r, nc = path[r][c].c;
        r = nr, c = nc;
    }
    return 1;
}
void missile(point src, point desc, int turn) {
    for (int dr = -1; dr <= 1; dr++) {
        for (int dc = -1; dc <= 1; dc++) {
            int r = desc.r + dr, c = desc.c + dc;
            if (r < 0) r += N;
            if (r >= N) r -= N;
            if (c < 0) c += M;
            if (c >= M) c -= M;
            if (r == src.r && c == src.c) continue;
            if (r == desc.r && c == desc.c) continue;
            power[r][c] -= power[src.r][src.c] / 2;
            atk[r][c] = turn;
        }
    }
}
void destroy() {
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < M; c++) {
            if (power[r][c] < 0) power[r][c] = 0;
        }
    }
}
void attack(point src, point desc, int turn) {
    power[desc.r][desc.c] -= power[src.r][src.c];
    if (!lazer(src, desc, turn)) missile(src, desc, turn);
}
void equip(int turn) {
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < M; c++) {
            if (!power[r][c]) continue;
            if (atk[r][c] == turn) continue;
            power[r][c]++;
        }
    }
}
void run(int turn) {
    if (count_tower() == 1) return;
    point src = find_src(turn);
    point desc = find_desc(turn);
    power[src.r][src.c] += N + M;
    attack(src, desc, turn);
    destroy();
    equip(turn);
}
int test63() {
    scanf("%d%d%d", &N, &M, &K);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &power[i][j]);
        }
    }

    for (int i = 1; i <= K; i++) {
        run(i);
    }
    printf("%d\n", get_max());

    return 0;
}
*/