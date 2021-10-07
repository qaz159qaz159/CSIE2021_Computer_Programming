#include <stdio.h>

int string2number(const char *a) {
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

int isTriangle(int a[]) {
    if (a[0] + a[1] > a[2] && a[1] + a[2] > a[0] && a[2] + a[0] > a[1]) return 1;
    return 0;
}

int whatTriangle(int a[]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < i; ++j) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2] || a[0] * a[0] + a[2] * a[2] == a[1] * a[1] ||
        a[2] * a[2] + a[1] * a[1] == a[0] * a[0])
        return 3;
    else if (a[0] * a[0] + a[1] * a[1] < a[2] * a[2])
        return 2;
    else return 1;
}

int main() {
    char a[1000], c[4][100] = {'\0'}, tmp;
    int b[3], cNum[4] = {0};
    do {
        for (int i = 0; i < 1000; ++i) a[i] = '\0';
        scanf(" %s", &a);
        if (a[0] == '-' && a[1] == '1') break;
        if (string2number(a) == -1) tmp = a[0];
        for (int i = 0; i < 3; ++i) {
            for (int i = 0; i < 1000; ++i) a[i] = '\0';
            scanf(" %s", &a);
            b[i] = string2number(a);
        }
        if (!isTriangle(b)) c[0][cNum[0]++] = tmp;
        else {
            if (whatTriangle(b) == 1) c[1][cNum[1]++] = tmp;
            else if (whatTriangle(b) == 2) c[2][cNum[2]++] = tmp;
            else if (whatTriangle(b) == 3) c[3][cNum[3]++] = tmp;
        }
    } while (1);

    for (int i = 0; i < 4; ++i) {
        int n = 0;
        for (int j = 0; c[i][j]; ++j) {
            n++;
        }
        n--;
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if (c[i][k] > c[i][k + 1]) {
                    char t = c[i][k];
                    c[i][k] = c[i][k + 1];
                    c[i][k + 1] = t;
                }
            }
        }
    }

    printf("Not Triangle: ");
    for (int i = 0; c[0][i]; ++i) {
        printf("%c", c[0][i]);
        if (c[0][i + 1] != '\0') printf(",");
    }
    if (!c[0][0]) printf("None");
    printf("\n");
    printf("Acute Angle: ");
    for (int i = 0; c[1][i]; ++i) {
        printf("%c", c[1][i]);
        if (c[1][i + 1] != '\0') printf(",");
    }
    if (!c[1][0]) printf("None");
    printf("\n");
    printf("Obtuse Angle: ");
    for (int i = 0; c[2][i]; ++i) {
        printf("%c", c[2][i]);
        if (c[2][i + 1] != '\0') printf(",");
    }
    if (!c[2][0]) printf("None");
    printf("\n");
    printf("Right Angle: ");
    for (int i = 0; c[3][i]; ++i) {
        printf("%c", c[3][i]);
        if (c[3][i + 1] != '\0') printf(",");
    }
    if (!c[3][0]) printf("None");
}