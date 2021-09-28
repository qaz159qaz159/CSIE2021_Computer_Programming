#include <stdio.h>

int main() {
    long long int a, b = 1;
    scanf("%lld", &a);
    for (int i = 0; i < a - 1; ++i) {
        printf("%lld\n", b++);
    }
    printf("%lld\n", b--);
    for (int i = 0; i < a - 1; ++i) {
        printf("%lld\n", b--);
    }
}