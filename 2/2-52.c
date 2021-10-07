#include <stdio.h>

long long int pow(long long int a, int b) {
    long long int tmp = a;
    for (int i = 0; i < b - 1; ++i) {
        tmp *= a;
    }
    return tmp;
}

int main() {
    long long int a, b, have = 0;
    scanf("%lld%lld", &a, &b);
    for (long long int i = a; i <= b; ++i) {
        if (i / 10 == 0) {
            if (!have) have = 1;
            else printf(" & ");
            printf("%lld", i);
        } else if (i / 100 == 0) {
            if (pow(i / 10, 2) + pow(i % 10, 2) == i) {
                if (!have) have = 1;
                else printf(" & ");
                printf("%lld", i);
            }
        } else if (i / 1000 == 0) {
            if (pow(i / 100, 3) + pow(i % 100 / 10, 3) + pow(i % 10, 3) == i) {
                if (!have) have = 1;
                else printf(" & ");
                printf("%lld", i);
            }
        } else if (i / 10000 == 0) {
            if (pow(i / 1000, 4) + pow(i % 1000 / 100, 4) + pow(i % 100 / 10, 4) + pow(i % 10, 4) == i) {
                if (!have) have = 1;
                else printf(" & ");
                printf("%lld", i);
            }
        } else if (i / 100000 == 0) {
            if (pow(i / 10000, 5) + pow(i % 10000 / 1000, 5) + pow(i % 1000 / 100, 5) + pow(i % 100 / 10, 5) +
                pow(i % 10, 5) == i) {
                if (!have) have = 1;
                else printf(" & ");
                printf("%lld", i);
            }
        }
    }
    if (!have) printf("none");
}