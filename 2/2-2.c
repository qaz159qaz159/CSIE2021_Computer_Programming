#include <stdio.h>

int main() {
    long long int a;
    scanf("%lld", &a);
    if (a % 3 == 0 && a % 5 == 0 && a % 7 != 0) printf("0");
    else printf("1");
}