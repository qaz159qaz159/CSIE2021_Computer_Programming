#include <stdio.h>

int f(int a[3], int b) {
    printf("class %d\n", b);
    for (int i = 0; i < 3; ++i) {
        printf(" %d: %d\n", i + 1, a[i]);
    }
    printf(" sum: %d\n", a[0] + a[1] + a[2]);
    printf(" avg: %.2lf\n", ((double) (a[0] + a[1] + a[2])) / 3);
    return a[0] + a[1] + a[2];
}

int main() {
    int a[2][3], sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    sum += f(a[0], 1);
    sum += f(a[1], 2);
    printf("total: %d, avg: %.2lf", sum, (double) sum / 6);
}