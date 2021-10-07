#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; ++i) {
        printf("%d", i);
    }
    for (int i = a - 1; i > 0; --i) {
        printf("%d", i);
    }
}