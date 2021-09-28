#include <stdio.h>

int main() {
    int a, b = 1;
    scanf("%d", &a);
    while (a != b - 1) {
        if (b != 4) {
            printf("floor %d\n", b);
        }
        b++;
    }
}