#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int n = 0, s[b];
    for (int i = 0; i < b; ++i) {
        s[i] = 0;
    }
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            scanf("%d", &n);
            s[j] += n;
        }
    }
    for (int i = 0; i < b; ++i) {
        printf("%d\n", s[i] / a);
    }
}