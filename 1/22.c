#include <stdio.h>
#include <math.h>

double f(double p1[2], double p2[2]) {
    return sqrt((p1[0] - p2[0]) * (p1[0] - p2[0]) + (p1[1] - p2[1]) * (p1[1] - p2[1]));
}

int main() {
    double a[3][2] = {0}, b, c, d, s;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            scanf("%lf", &a[i][j]);
        }
    }
    if ((a[0][0] - a[1][0]) / (a[0][1] - a[1][1]) == (a[2][0] - a[1][0]) / (a[2][1] - a[1][1])) {
        printf("0.00");
        return 0;
    }
    b = f(a[0], a[1]);
    c = f(a[1], a[2]);
    d = f(a[2], a[0]);
    s = (b + c + d) / 2;
    s = sqrt(s * (s - b) * (s - c) * (s - d));
    printf("%.2lf", s);
}