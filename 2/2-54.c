#include <stdio.h>

int haveDot(char a[]) {
    for (int i = 0; i < 128; ++i) {
        if (a[i] == ',') return 1;
    }
    return 0;
}

int main() {
    int a, b;
    char c[128];
    scanf("%d%d", &a, &b);
    do {
        scanf("%s", &c);
        if (haveDot(c) && c[0] != 'q') {
            while (c[0] != ',') {
                for (int i = 0; i < 128; ++i) {
                    c[i] = c[i + 1];
                }
            }
        }
        if (c[0] == ',') {
            if (c[1] != 'F') {
                if (c[2] == '+' || c[2] == '-') {
                    if (c[4] == 'R') {
                        a -= (c[6] - '0');
                    } else if (c[4] == 'E') {
                        b -= (c[6] - '0');
                    }
                } else if (c[2] == ',') {
                    if (c[3] == 'R') {
                        a -= (c[5] - '0');
                    } else if (c[3] == 'E') {
                        b -= (c[5] - '0');
                    }
                }
            }
        }
    } while (c[0] != 'q');
    if (a <= 0 && b <= 0) printf("yes");
    else printf("no");
}