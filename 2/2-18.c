#include <stdio.h>

int main() {
    long long int a, b, c;
    scanf("%lld%lld%lld", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b) {
        printf("True\n");
        if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) {
            printf("Right Triangle");
            return 0;
        } else {
            printf("Non-Right Triangle");
            return 0;
        }
    } else {
        printf("False");
        return 0;
    }
}