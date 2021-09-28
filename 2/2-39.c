#include <stdio.h>

int main() {
    long long int a;
    scanf("%lld", &a);
    for (int i = 0; i < a; ++i) {
        for (int j = 1; j <= a - i - 1; ++j) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            printf("*");
        }
        printf("\n");
    }
}