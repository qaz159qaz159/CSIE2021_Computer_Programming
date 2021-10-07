#include <stdio.h>
#include <math.h>

int f(int a[], int b[]) {
    if (a[0] > b[0] && a[1] > b[1]) return abs((a[0] - b[0]) * (a[1] * b[1]));
    return 0;
}

int areaCount(int a[], int b[]) {
    return abs((a[0] - b[0]) * (a[1] * b[1]));
}

int main() {
    int a[3][2][2], area = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                scanf("%d", &a[i][j][k]);
            }
        }
    }
    area -= f(a[0][1], a[1][0]) + f(a[0][1], a[2][0]) + f(a[1][1], a[2][0]) + f(a[1][1], a[0][0]) +
            f(a[2][1], a[0][0]) + f(a[2][1], a[1][0]);
    area += areaCount(a[0][0], a[0][1]) + areaCount(a[1][0], a[1][1]) + areaCount(a[2][0], a[2][1]);
    if (a[0][1][0] > a[1][0][0] && a[0][1][1] > a[1][0][1]) {
        int b[2][2];
        b[0][0] = a[1][0][0];
        b[0][1] = a[1][0][1];
        b[1][0] = a[0][1][0];
        b[1][1] = a[0][1][1];
        area += f(b[1], a[2][0]);
    } else {

    }
}