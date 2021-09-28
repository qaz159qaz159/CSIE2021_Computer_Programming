#include <stdio.h>
#include <math.h>

int main() {
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            printf("%d*%d=%2d", i, j, i * j);
            if (b != j) printf(" ");
        }
        printf("\n");
    }
}