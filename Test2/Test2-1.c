#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);
    int a[num], firstPos = 0, secondPos = 0, height = 0, maxHigh = 0, secondHigh = 0, now = 0, maxNow = 0, smallNow = 0;
    for (int i = 0; i < num; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < num; ++i) {
        for (int j = i; j < num; ++j) {
            int p = 0;
            int h1 = a[i], h2 = a[j], max = 0, small = 0;
            small = h1;
            max = h2;
            if (h1 > h2) {
                max = h1;
                small = h2;
            }
            for (int k = i + 1; k < j; ++k) {
                if (small == max && a[k] == small) {
                    p = 1;
                }
            }
            if (p) break;
            if (small > smallNow) {
                if (i != j) {
                    firstPos = i;
                    secondPos = j;
                    now = abs(i - j) * small;
                    smallNow = small;
                    maxNow = max;
                }
            } else if (small == smallNow) {
                if (i != j) {
                    if (now < abs(i - j) * small) {
                        firstPos = i;
                        secondPos = j;
                        now = abs(i - j) * small;
                        smallNow = small;
                        maxNow = max;
                    }
                }
            }
        }
    }

    printf("%d %d\n", firstPos + 1, secondPos + 1);
    printf("%d", now);
    return 0;
}