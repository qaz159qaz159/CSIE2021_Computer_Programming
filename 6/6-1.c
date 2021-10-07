#include <stdio.h>

int sum1(int n) {
    if (n == 1 || n == 0) return n;
    return n + sum1(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", sum1(n));
}