#include <stdio.h>

int main() {
    long long int a, b, n;
    scanf("%lld", &a);
    n = a;
    while (a > 3) {
        b = a / 4;
        n += b;
        a %= 4;
        a += b;
    }
    if (a == 3) {
        n++;
    }
    printf("%lld", n);
}