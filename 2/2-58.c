#include <stdio.h>

int main() {
    int a, isFloor = 1;
    scanf("%d", &a);
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= a - i; ++j) {
            printf("  ");
        }
        printf("__");
        for (int j = 1; j <= i - 1; ++j) {
            printf("||");
        }
        printf("\n");
    }
    for (int i = 1; i <= a; ++i) {
        printf("||");
    }
}