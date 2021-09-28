//
// Created by qaz15 on 2021/9/27.
//

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a == 0 || b == 0 || c == 0) {
        printf("0");
    } else if (a + b > c && b + c > a && c + a > b) {
        printf("1");
    } else {
        printf("0");
    }
}