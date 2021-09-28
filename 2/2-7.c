#include <stdio.h>

int main() {
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    if (a != 1 && a != 2) {
        printf("role error");
        return 0;
    }
    if (b < 0 || b > 100) {
        printf("score error");
        return 0;
    }
    if (a == 1) {
        if (b >= 60) printf("pass");
        else printf("fail");
    } else {
        if (b >= 70) printf("pass");
        else printf("fail");
    }
}