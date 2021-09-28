#include <stdio.h>

int main() {
    long long int a;
    scanf("%lld", &a);
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
}