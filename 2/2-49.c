#include <stdio.h>

int main() {
    int a, b, c, d[1000][3] = {0};
    for (int i = 0; i < 1000; ++i) {
        d[i][2] = 10000;
    }
    scanf("%d%d", &a, &b);
    for (int i = 0; i < a; ++i) {
        scanf("%d", &c);
        d[c % b][0] += c;
        if (d[c % b][1] < c) d[c % b][1] = c;
        if (d[c % b][2] > c) d[c % b][2] = c;
    }
    for (int i = 0; i < b; ++i) {
        printf("%d %d %d\n", d[i][0], d[i][1], d[i][2]);
    }
}