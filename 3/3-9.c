#include <stdio.h>

double f(int a[3], int b) {
    printf("student %d\n", b);
    for (int i = 0; i < 3; ++i) {
        printf(" %d: %d\n", i + 1, a[i]);
    }
    printf(" sum: %d\n", a[0] + a[1] + a[2]);
    printf(" avg: %.2lf\n", ((double) (a[0] + a[1] + a[2])) / 3);
    return ((double) (a[0] + a[1] + a[2])) / 3;
}

int main() {
    int a[5][3], num = 0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    double max = 0.0;
    for (int i = 0; i < 5; ++i) {
        double b = f(a[i], i + 1);
        if (b > max) {
            max = b;
            num = i + 1;
        }
    }
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            sum += a[i][j];
        }
    }
    printf("total: %d, avg: %.2lf\n", sum, (double) sum / 5 / 3);
    printf("highest avg: student %d: %.2lf", num, max);
}