#include <stdio.h>

int main() {
    long long int a, b = 1;
    scanf("%lld", &a);
    for (int i = 1; i <= a; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("%lld ", b++);
        }
        printf("\n");
    }
}