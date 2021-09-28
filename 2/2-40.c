#include <stdio.h>
#include <math.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a - 2; i += 2) {
        for (int j = 0; j < a - i; j += 2) {
            printf(" ");
        }
        for (int j = 0; j < i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < a; ++i) {
        printf("*");
    }
    printf("\n");
    for (int i = a - 2; i >= 1; i -= 2) {
        for (int j = 0; j < a - i; j += 2) {
            printf(" ");
        }
        for (int j = 0; j < i; ++j) {
            printf("*");
        }
        printf("\n");
    }
}