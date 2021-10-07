#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    double a[n][n], b[n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%lf", &a[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        scanf("%lf", &b[i]);
    }
    for (int i = 0; i < n; ++i) {
        double tmp = a[i][i];
        for (int j = i; j < n; ++j) {
            a[i][j] /= tmp;
        }
        b[i] = b[i] /= tmp;
    }
    for (int i = n - 1; i >= 0; --i) {
        for (int j = n - 1; j > i; --j) {
            b[i] -= b[j] * a[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%.6lf\n", b[i]);
    }
}