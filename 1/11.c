//
// Created by qaz15 on 2021/9/27.
//

#include <stdio.h>

int main() {
    long n, a = 0, b = 0, c = 0;
    scanf("%ld", &n);
    long num[n];
    for (int i = 0; i < n; ++i) {
        scanf("%ld", &num[i]);
        if (num[i] % 3 == 0) a++;
        else if (num[i] % 3 == 1) b++;
        else c++;
    }
    printf("%ld %ld %ld", a, b, c);
}