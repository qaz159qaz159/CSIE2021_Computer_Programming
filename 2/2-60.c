#include <stdio.h>

int len(char a[]) {
    int n = 0;
    while (a[n] != '\0') {
        n++;
    }
    return n;
}

int main() {
    char a[20] = {'\0'}, b[20] = {'\0'};
    int n = 0;
    scanf(" %s %s", &b, &a);
    for (int i = 0; i < len(a); ++i) {
        for (int j = 0; j < len(b); ++j) {
            if (a[i + j] != b[j]) break;
            if (j == len(b) - 1) n++;
        }
    }
    printf("%d", n);
}