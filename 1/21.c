#include <stdio.h>

int main() {
    long long int a, b, c, f = 20;
    scanf("%lld%lld%lld", &a, &b, &c);
    if (a % 2 == 1) {
        f += (a + 1) / 2 * (b - c) + c;
    } else {
        f += a / 2 * (b - c) + c;
    }
    if (f < 20) printf("20");
    else printf("%lld", f);
    return 0;
}