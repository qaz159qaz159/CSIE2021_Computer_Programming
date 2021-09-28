#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, n = 1, max = 0;
    scanf("%d%d%d", &a, &b, &c);
    if (b < 1 || b > 12 || c < 0 || c > 6) {
        printf("invalid");
        return 0;
    }
    printf(" Su Mo Tu We Th Fr Sa\n");
    printf("=====================\n");
    if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) max = 31;
    else if (b == 4 || b == 6 || b == 9 || b == 11) max = 30;
    else if (b == 2) {
        if (a % 4 == 0) {
            if (a % 100 == 0) {
                if (a % 400 == 0)
                    max = 29;
                else max = 28;
            } else max = 29;
        } else max = 28;
    }
    for (int i = 0; i < c; ++i) {
        printf("   ");
    }
    for (int i = 1; i <= max; ++i) {
        printf("%3d", i);
        if (i % 7 == 7 - c || (i % 7 == 0 && c == 0)) printf("\n");
    }
    if ((max + c) % 7 != 0) printf("\n");
    printf("=====================\n");
}