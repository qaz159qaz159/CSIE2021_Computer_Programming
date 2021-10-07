#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i = a; i > 0 ; --i) {
        printf("data %d\n", i);
    }
    printf("\n");
    for (int i = 0; i < a; i++) {
        printf("data %d\n", i + 1);
    }
}