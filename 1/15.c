//
// Created by qaz15 on 2021/9/27.
//

#include <stdio.h>

int main() {
    double pi = 3.1415926, a, b, c, out;
    scanf("%lf%lf%lf", &a, &b, &c);
    out = 0.75 * c * c * pi;
    if (c > a) {
        out += 0.25 * (c - a) * (c - a) * pi;
    }
    if (c > b) {
        out += 0.25 * (c - b) * (c - b) * pi;
    }
    printf("%.6lf", out);
}