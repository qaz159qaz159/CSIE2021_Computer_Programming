#include <stdio.h>
#include <math.h>

void f(int a) {
    if (a == 1) printf("壹");
    else if (a == 2) printf("貳");
    else if (a == 3) printf("參");
    else if (a == 4) printf("肆");
    else if (a == 5) printf("伍");
    else if (a == 6) printf("陸");
    else if (a == 7) printf("柒");
    else if (a == 8) printf("捌");
    else if (a == 9) printf("玖");
}

int main() {
    long long int a;
    scanf("%lld", &a);
    if (a == 0) return 0;
    else {
        if (a < 0 || a > 99999) {
            printf("out of range");
            return 0;
        }
        f(a / 10000);
        if (a > 9999) printf("萬");
        f(a % 10000 / 1000);
        if (a > 999 && a % 10000 / 1000 != 0) printf("仟");
        f(a % 1000 / 100);
        if (a > 99 && a % 1000 / 100 != 0) printf("佰");
        f(a % 100 / 10);
        if (a > 9 && a % 100 / 10 != 0) printf("拾");
        f(a % 10);
    }
    printf("元整");
}