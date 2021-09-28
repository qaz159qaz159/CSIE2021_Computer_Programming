//
// Created by qaz15 on 2021/9/27.
//

#include <stdio.h>

int main() {
    long int a = 0, b = 0, n = 0;
    char c;
    scanf("%ld%ld", &a, &b);
    while (a != b) {
        if (a > b) {
            b += 5;
        } else if (a < b) {
            b -= 2;
        }
        n++;
    }
    printf("%ld", n);
}