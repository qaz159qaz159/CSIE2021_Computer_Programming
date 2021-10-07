#include <stdio.h>
#include <math.h>

double lenSquare(int a[2], int b[2]) {
    return pow((double) (a[0] - b[0]), 2) + pow((double) (a[1] - b[1]), 2);
}

void f(int a[3][2]) {
    double b = lenSquare(a[0], a[1]), c = lenSquare(a[1], a[2]), d = lenSquare(a[2], a[0]);
    if (b == c || c == d || d == b) {
        printf("isosceles\n");
    } else if (b + c == d || c + d == b || d + b == c) {
        printf("right\n");
    } else if (b + c > d && c + d > b && d + b > c) {
        printf("acute\n");
    } else {
        printf("obtuse\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n][2];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                scanf("%d", &a[j][k]);
            }
        }
        f(a);
    }
}