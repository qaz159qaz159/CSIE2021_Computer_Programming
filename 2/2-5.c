#include <stdio.h>

int main() {
    long long int a, b, tmp;
    scanf("%lld%lld", &a, &b);
    tmp = a;
    for (int i = 1; i < b; ++i) {
        a *= tmp;
    }
    printf("%lld", a);
}