#include <stdio.h>

int main() {
    char a;
    while (1) {
        scanf(" %c", &a);
        if (a == 'y') {
            printf("run\n");
        } else {
            return 0;
        }
    }
}