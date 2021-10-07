#include <stdio.h>
#include <math.h>

int string2number(const char *a) {
    int isNagative = 0, num = 0, len = 0;
    if (a[0] == '-') {
        isNagative = 1;
    }
    for (int i = 0; a[i]; ++i) {
        len++;
    }
    if (isNagative)
        for (int i = len - 1; i >= 1; ++i) {
            num += (a[i] - '0') * (int) pow(10, len - i - 1);
        }
    else
        for (int i = len - 1; i >= 0; ++i) {
            num += (a[i] - '0') * (int) pow(10, len - i - 1);
        }
    if (!isNagative)
        return num;
    return num * -1;
}

int main() {
    char a[1000] = {'\0'}, num[1000], len = 0, tmp[1000];
    do {
        for (int i = 0; i < 1000; ++i) {
            a[i] = '\0';
        }
        scanf("%s", &a);
        if ((a[0] != 'q' && a[1] != '\0') || a[0] - '0' < 0 || a[0] - '0' > 0) {
            printf("Please Enter Numbers Only\n");
        }

        num[len] = string2number(&a);
        len++;
    } while (a[0] != 'q' && a[1] == '\0');
    for (int i = 0; i < len; ++i) {
        tmp[i] = num[i];
    }
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - 1 - i; ++j) {
            if (num[j] > num[j + 1]) {
                int t = num[j];
                num[j] = num[j + 1];
                num[j + 1] = t;
            }
        }
    }
    printf("[");
    for (int j = 0; j < len; ++j) {
        printf("%d", tmp[j]);
        if (j != len - 1) printf(", ");
    }
    printf("]\n");
    printf("[");
    for (int j = 0; j < len; ++j) {
        printf("%d", num[j]);
        if (j != len - 1) printf(", ");
    }
    printf("]\n");
    printf("[");
    for (int j = len - 1; j >= 0; --j) {
        printf("%d", num[j]);
        if (j != len - 1) printf(", ");
    }
    printf("]\n");
    printf("[");
    for (int j = 0; j < len; ++j) {
        printf("%d", tmp[j]);
        if (j != len - 1) printf(", ");
    }
    printf("]\n");

}