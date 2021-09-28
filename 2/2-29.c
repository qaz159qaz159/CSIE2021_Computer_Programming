#include <stdio.h>

int main() {
    int a,b;
    scanf("%d", &a);
    for (int i = 0; i <a; ++i) {
        scanf("%d", &b);
        printf("%d\n", b);
        for (int j = 0; j < b; ++j) {
            printf("\n");
        }
    }
    printf("--------------------\n");
}