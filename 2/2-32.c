#include <stdio.h>

int main() {
    long long int a, c = 0, d = 0, e = 0, n = 1;
    char b;
    while (1) {
        scanf("%lld%c", &a, &b);
        if (n % 2 == 1) {
            c += a;
        }
        e += a;
        d = e - c;
        n++;
        if (b != ',' || b == EOF || a == EOF) break;
    }
    printf("%lld\n%lld\n%lld", c, d, e);
}