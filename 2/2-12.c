#include <stdio.h>

char *f(int a, int isAD) {
    if (isAD) {
        switch (a % 12) {
            case 0:
                printf("%s\n", "猴");
                break;
            case 1:
                printf("%s\n", "雞");
                break;
            case 2:
                printf("%s\n", "狗");
                break;
            case 3:
                printf("%s\n", "豬");
                break;
            case 4:
                printf("%s\n", "鼠");
                break;
            case 5:
                printf("%s\n", "牛");
                break;
            case 6:
                printf("%s\n", "虎");
                break;
            case 7:
                printf("%s\n", "兔");
                break;
            case 8:
                printf("%s\n", "龍");
                break;
            case 9:
                printf("%s\n", "蛇");
                break;
            case 10:
                printf("%s\n", "馬");
                break;
            case 11:
                printf("%s\n", "羊");
                break;
        }
    } else {
        switch ((a + 1911) % 12) {
            case 0:
                printf("%s\n", "猴");
                break;
            case 1:
                printf("%s\n", "雞");
                break;
            case 2:
                printf("%s\n", "狗");
                break;
            case 3:
                printf("%s\n", "豬");
                break;
            case 4:
                printf("%s\n", "鼠");
                break;
            case 5:
                printf("%s\n", "牛");
                break;
            case 6:
                printf("%s\n", "虎");
                break;
            case 7:
                printf("%s\n", "兔");
                break;
            case 8:
                printf("%s\n", "龍");
                break;
            case 9:
                printf("%s\n", "蛇");
                break;
            case 10:
                printf("%s\n", "馬");
                break;
            case 11:
                printf("%s\n", "羊");
                break;
        }
    }
}

int main() {
    char a[10];
    int b;
    scanf("%s", &a);
    while (1) {
        scanf("%d", &b);
        if (b == -1) break;
        if (a[0] == 'A' && a[1] == 'D') {
            f(b, 1);
        } else {
            f(b, 0);
        }
    }
}