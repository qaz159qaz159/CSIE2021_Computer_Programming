#include <stdio.h>

int main() {
    int a, n = 1, max = -1, maxPos, sum = 0;
    double avg = 0.0;
    do {
        scanf("%d", &a);
        if (a == -1) break;
        if (a > max) {
            max = a;
            maxPos = n;
        }
        sum += a;
        n++;
    } while (a != -1);
    avg = (double) sum / (n - 1);
    printf("%d\n%.1lf\n%d\n%d", sum, avg, max, maxPos);
}