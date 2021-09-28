#include <stdio.h>

int main() {
    long long int a, b = 0;
    scanf("%lld", &a);
    while (a != 0) {
        b += a % 10;
        a /= 10;
    }
    printf("%lld", b);
}