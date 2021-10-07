#include <stdio.h>

int main() {
    double a[3];
    scanf("%lf %lf %lf", &a[0], &a[1], &a[2]);
    printf("avg = %.2lf\nfail:\n", (a[0] + a[1] + a[2]) / 3.0);
    for (int i = 0; i < 3; ++i) {
        if (a[i] < 60) printf("%d: %.0lf\n", i + 1, a[i]);
    }
}