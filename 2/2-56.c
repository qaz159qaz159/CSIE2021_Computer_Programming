#include <stdio.h>

int main() {
    char a;
    int isOne = 0, n = 0;
    do {
        scanf(" %c", &a);
        if (isOne && a == '9') {
            ++n;
        }
        if (a == '1') {
            isOne = 1;
        } else {
            isOne = 0;
        }
    } while (a != 'q');
    printf("%d", n);
}