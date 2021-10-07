#include <stdio.h>

void move(int *pos, int dir) {
    if (dir == 0) pos[1]++;
    else pos[0]++;
}

int main() {
    int m, n, pos1[2], pos2[2], first[2], second[2], f[2], t = 0, aFirst = 1, bFirst = 1, mov[2][2], num[2] = {1};
    mov[0][0] = 0;
    mov[0][1] = 1;
    mov[1][0] = 1;
    mov[1][1] = 0;
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d", &m, &n, &pos1[0], &pos1[1], &second[0], &first[0], &f[0], &pos2[0], &pos2[1],
          &second[1], &first[1], &f[1]);
    printf("%d %d %d %d %d %d %d %d %d %d %d %d\n", m, n, pos1[0], pos1[1], second[0], first[0], f[0], pos2[0], pos2[1],
           second[1], first[1], f[1]);
    printf("m=%d n=%d\n", m, n);
    while (f[0] > 0 && f[1] > 0) {
        if (aFirst == 1) {
//            printf("num[0]: %d\n", num[0]);
            move(&pos1, mov[0][0]);
            f[0]--;
            if (num[0] == first[0]) {
                num[0] = 0;
                aFirst = 0;
            }
            num[0]++;
        } else {
//            printf("num[0]: %d\n", num[0]);
            move(&pos1, mov[0][1]);
            f[0]--;
            if (num[0] == second[0]) {
                num[0] = 0;
                aFirst = 1;
            }
            num[0]++;
        }

        if (bFirst == 1) {
//            printf("num[1]: %d\n", num[1]);

            move(&pos2, mov[1][0]);
            f[1]--;
            if (num[1] == first[1]) {
                num[1] = 0;
                bFirst = 0;
            }
            num[1]++;
        } else {
//            printf("num[1]: %d\n", num[1]);

            move(&pos2, mov[1][1]);
            f[1]--;
            if (num[1] == second[1]) {
                num[1] = 0;
                bFirst = 1;
            }
            num[1]++;
        }
//        printf("A:%d %d B:%d %d\n", pos1[0], pos1[1], pos2[0], pos2[1]);

        if (pos1[0] >= m) pos1[0] = 0;
        if (pos1[1] >= n) pos1[1] = 0;
        if (pos2[0] >= m) pos2[0] = 0;
        if (pos2[1] >= n) pos2[1] = 0;
        printf("A:%d %d B:%d %d\n", pos1[0], pos1[1], pos2[0], pos2[1]);
        if (t == 5) {
            printf("t == 5 : pos1:%d %d pos2:%d %d\n", pos1[0], pos1[1], pos2[0], pos2[1]);
        }
        if (pos1[0] == pos2[0] && pos1[1] == pos2[1]) {
            printf("robots explode at time %d", t);
            return 0;
        }
        t++;
    }
    printf("robots will not explode");
    return 0;
}