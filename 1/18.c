#include <stdio.h>

int main() {
    long long int a, b, c;
    scanf("%lld", &a);
    c = a % 12;
    b = a / 12;
    if (c == 0) printf("%lld dozen", b);
    else printf("%lld dozen and %lld", b, c);
    return 0;
}