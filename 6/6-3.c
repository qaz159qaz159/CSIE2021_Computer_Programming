#include <stdio.h>

int fact(int n) {
    if (n == 1 || n == 0) return 1;
    return n * fact(n - 1);
}

int sum1(int n) {
    if (n == 1 || n == 0) return n;
    return n + sum1(n - 1);
}

void return2num(int n, int *factRst, int *sumRst) {
    printf("%d\n%d", fact(n), sum1(n));
}

int main() {
    int n, *a, *b;
    scanf("%d", &n);
    return2num(n, &a, &b);
}