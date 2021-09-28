#include <stdio.h>

int main() {
    int a;
    char b;
    do {
        scanf("%d %c", &a, &b);
        if (a >= 60) printf("pass\n");
        else printf("fail\n");
        if (b != 'y') break;
    } while (1);
}