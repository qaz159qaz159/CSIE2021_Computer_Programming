#include <stdio.h>

int main() {
    long long int a;
    scanf("%lld", &a);
    if (a < 1 || a > 12) {
        printf("Month doesn't exist!");
        return 0;
    } else if (a == 1 || a == 2 || a == 12) {
        printf("Winter");
        return 0;
    } else if (a < 6) {
        printf("Spring");
        return 0;
    } else if (a < 9) {
        printf("Summer");
        return 0;
    } else {
        printf("Autumn");
        return 0;
    }
}