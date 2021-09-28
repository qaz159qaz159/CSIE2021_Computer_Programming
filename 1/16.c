#include <stdio.h>

int main() {
    long long int a[3], s, m;
    scanf("%lld%lld%lld", &a[0], &a[1], &a[2]);
    s = a[0];
    m = a[0];
    printf("sum is %lld\n", a[0] + a[1] + a[2]);
    printf("average is %.2lf\n", (a[0] + a[1] + a[2]) / 3.0);
    printf("product is %lld\n", a[0] * a[1] * a[2]);
    for (int i = 0; i < 3; ++i) {
        if (a[i] < s) s = a[i];
        if (a[i] > m) m = a[i];
    }
    printf("smallest is %lld\n", s);
    printf("largest is %lld", m);
}