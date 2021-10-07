#include <stdio.h>

int main() {
    double a[3];
    scanf("%lf %lf %lf", &a[0], &a[1], &a[2]);
    printf("avg = %.2lf\nfail:\n", (a[0] + a[1] + a[2]) / 3.0);
    for (int i = 0; i < 3; ++i) {
        if (a[i] < 60) printf("%d: %.0lf\n", i + 1, a[i]);
    }
    printf("highest:\n");
    if (a[0] > a[1] && a[0] > a[2]) printf("%d: %.0lf", 1, a[0]);
    else if (a[1] > a[0] && a[1] > a[2]) printf("%d: %.0lf", 2, a[1]);
    else printf("%d: %.0lf", 3, a[2]);
}