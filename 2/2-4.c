#include <stdio.h>

int main() {
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    if (a == 1) {
        if (b >= 60) printf("pass");
        else printf("fail");
    } else {
        if (b >= 70) printf("pass");
        else printf("fail");
    }
}