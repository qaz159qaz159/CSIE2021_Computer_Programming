#include <stdio.h>
#include <math.h>

int main() {
    long long int a, b = 1;
    scanf("%lld", &a);
    for (int i = 2; i < a; ++i) {
        b = 1;
        for (int j = 2; j < sqrt(i + 1); ++j) {
            if (i % j == 0) {
                b = 0;
                break;
            }
        }
        if (b == 1) {
            printf("%d is prime\n", i);
        }
    }
}