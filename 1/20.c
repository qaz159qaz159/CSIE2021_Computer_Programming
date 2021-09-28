#include <stdio.h>

int main() {
    long long int a;
    scanf("%lld", &a);
    if (a % 7 == 0) {
        printf("YES");
        return 0;
    } else {
        while (a != 0) {
            if (a % 10 == 7) {
                printf("YES");
                return 0;
            }
            a /= 10;
        }
    }
    printf("NO");
    return 0;
}