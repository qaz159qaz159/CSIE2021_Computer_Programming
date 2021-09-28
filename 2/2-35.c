#include <stdio.h>

int main() {
    long long int a;
    scanf("%lld", &a);
    for (int i = a; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
}