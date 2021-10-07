#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n], b[n], c[n], num1 = 0, num2 = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 1) {
            b[num1++] = a[i];
        } else {
            c[num2++] = a[i];
        }
    }
    for (int i = 0; i < num1; ++i) {
        printf("%d", b[i]);
        if (i < num1 - 1) printf(" ");
    }
    printf("\n");
    for (int i = 0; i < num2; ++i) {
        printf("%d", c[i]);
        if (i < num2 - 1) printf(" ");
    }
}