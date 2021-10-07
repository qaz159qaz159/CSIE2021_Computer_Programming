#include <stdio.h>

int main() {
    int n[1000], t = 0;
    for (int i = 0; n[i - 1] != -1; ++i) {
        scanf("%d", &n[i]);
        t++;
    }
    for (int i = t - 2; i >= 0; --i) {
        printf("%d\n", n[i]);
        for (int j = 0; j < n[i]; ++j) {
            printf("\n");
        }
    }
    printf("--------------------\n");
}