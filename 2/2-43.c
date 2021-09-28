#include <stdio.h>
#include <math.h>

int main() {
    long long int a;
    scanf("%lld", &a);
    for (int i = 0; i < a; ++i) {
        for (int j = 1; j < a - i; ++j) {
            printf(" ");
        }
        for (int j = 0; j < i + 1; ++j) {
            printf("*");
            if (j != i) printf(" ");
        }
        printf("\n");
    }
}