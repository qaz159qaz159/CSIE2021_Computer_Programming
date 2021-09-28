#include <stdio.h>

int main() {
    char a[128] = {'\0'}, b[128] = {'\0'};
    int isCorrect = 1;
    scanf("%s", &a);
    do {
        isCorrect = 1;
        for (int i = 0; i < 128; ++i) {
            b[i] = '\0';
        }
        scanf("%s", &b);
        for (int i = 0; i < 128; ++i) {
            if (a[i] != b[i]) {
                isCorrect = 0;
                break;
            }
        }
        if (isCorrect) {
            printf("Correct!");
            return 0;
        } else {
            printf("Wrong Password!\n");
        }
    } while (1);
}