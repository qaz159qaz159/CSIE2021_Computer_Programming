#include <stdio.h>

int main() {
    long long int a;
    scanf("%lld", &a);
    for (int i = a - 1; i >= 0; --i) {
        for (int j = i - 1; j >= 0; --j) {
            printf(" ");
        }
        for (int j = 1; j <= a - i; ++j) {
            printf("*");
        }
        printf("\n");
    }
}