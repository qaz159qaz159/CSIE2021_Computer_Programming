#include <stdio.h>
#include <math.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 1; i < a; ++i) {
        printf(" ");
    }
    printf("*\n");
    for (int i = 1; i < a - 1; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < a - i - j; k++) {
                printf(" ");
            }
            for (int k = 1; k < 2 * (i + j); k++) {
                printf("^");
            }
            printf("\n");
        }
    }
    for (int i = 0; i < a - 2; ++i) {
        for (int i = 0; i < a - 1 - (a - 3) / 2; ++i) {
            printf(" ");
        }
        for (int j = 0; j < a - 2; ++j) {
            printf("#");
        }
        printf("\n");
    }
}