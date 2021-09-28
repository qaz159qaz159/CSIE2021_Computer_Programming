#include <stdio.h>

int main() {
    long long int a, b, c, d;
    scanf("%lld%lld", &a, &b);
    if (b % 2 == 1) {
        printf("NO");
        return 0;
    } else {
        d = b / 2 - a;
        c = a - d;
        if (c >= 0 && d >= 0) printf("YES\n%lld %lld", c, d);
        else {
            printf("NO");
            return 0;
        }
    }
    return 0;
}