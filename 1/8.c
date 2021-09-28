//
// Created by qaz15 on 2021/9/27.
//

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", a % 10 + a % 100 / 10 + a % 1000 / 100 + a / 1000);
}
