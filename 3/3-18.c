#include <stdio.h>

int main() {
    int a, b, c, d, e = 0;
    scanf("%d%d%d", &a, &b, &c);
    d = b;
    for (int i = 0; i < c; ++i) {
        if (a + i * d < 0) {
            printf("(%d)", a + i * d);
        } else
            printf("%d", a + i * d);
        e += a + i * d;
        if (i != c - 1) printf(" + ");
        else printf(" = %d", e);
    }
}