#include <stdio.h>

int main() {
    int a, b, sumA = 0, max = 0, pos = 0;
    scanf("%d", &a);
    int aa[a];
    for (int i = 0; i < a; ++i) {
        scanf("%d", &aa[i]);
        sumA += aa[i];
    }
    scanf("%d", &b);
    int bb[b];
    for (int i = 0; i < b; ++i) {
        scanf("%d", &bb[i]);
        sumA -= aa[bb[i] - 1];
        aa[bb[i] - 1] = 0;
    }
    printf("%d\n", sumA);
    for (int i = 0; i < a; ++i) {
        if (aa[i] > max) {
            max = aa[i];
            pos = i + 1;
        }
    }
    printf("%d %d", pos, max);
}