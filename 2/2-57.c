#include <stdio.h>
#include <math.h>

int string2number(const char* a) {
    if (a[0] - '0' < 0 || a[0] - '0' > 9) {
        return -1;
    }
    int b = 0;
    for (int i = 0; a[i]; ++i) {
        b *= 10;
        b += a[i] - '0';
    }
    return b;
}

int main() {
    char a[10000], haveB = 0;
    int n = 0, tmp = 0;
    do {
        for (int i = 0; i < 10000; ++i) {
            a[i] = '\0';
        }
        scanf(" %s", &a);
        if (a[0] == 'A') {
            continue;
        } else if (a[0] == 'B') {
            a[0] = '0';
            haveB = 1;
        }
        if (tmp - string2number(a) < 0) {
            n += 10 * abs(tmp - string2number(a));
        } else if (tmp - string2number(a) > 0) {
            n += 6 * abs(tmp - string2number(a));
        } else {
            n += 5;
        }
        tmp = string2number(a);
    } while (!haveB);
    printf("%d", n);
}