#include <stdio.h>
#include <math.h>

int main() {
    double c, a1, b1, c1;
    long long int b, a;
    scanf("%lld%lld%lf", &a, &b, &c);
    a1 = a;
    b1 = b;
    c1 = c;
    c = (long long int) (c);
    if (a >= 10000) a = a - floor(a / 10000) * 10000;
    if (b >= 10000) b = b - floor(b / 10000) * 10000;
    if (c >= 10000) c = c - floor(c / 10000) * 10000;
    printf("%.0lf %.2lf %.2lf\n", floor(a / 1000 + b / 1000 + c / 1000),
           (floor(a / 1000) + floor(b / 1000) + floor(c / 1000)) / 3,
           sqrt((pow(floor(a / 1000) - (floor(a / 1000) + floor(b / 1000) + floor(c / 1000)) / 3, 2) +
                 pow(floor(b / 1000) - (floor(a / 1000) + floor(b / 1000) + floor(c / 1000)) / 3, 2) +
                 pow(floor(c / 1000) - (floor(a / 1000) + floor(b / 1000) + floor(c / 1000)) / 3, 2)) / 3));
    a = a - a / 1000 * 1000;
    b = b - b / 1000 * 1000;
    c = c - floor(c / 1000) * 1000;
    printf("%.0lf %.2lf %.2lf\n", floor(a / 100 + b / 100 + c / 100),
           (floor(a / 100) + floor(b / 100) + floor(c / 100)) / 3,
           sqrt((pow(floor(a / 100) - (floor(a / 100) + floor(b / 100) + floor(c / 100)) / 3, 2) +
                 pow(floor(b / 100) - (floor(a / 100) + floor(b / 100) + floor(c / 100)) / 3, 2) +
                 pow(floor(c / 100) - (floor(a / 100) + floor(b / 100) + floor(c / 100)) / 3, 2)) / 3));
    a = a - a / 100 * 100;
    b = b - b / 100 * 100;
    c = c - floor(c / 100) * 100;
    printf("%.0lf %.2lf %.2lf\n", floor(a / 10 + b / 10 + c / 10),
           (floor(a / 10) + floor(b / 10) + floor(c / 10)) / 3,
           sqrt((pow(floor(a / 10) - (floor(a / 10) + floor(b / 10) + floor(c / 10)) / 3, 2) +
                 pow(floor(b / 10) - (floor(a / 10) + floor(b / 10) + floor(c / 10)) / 3, 2) +
                 pow(floor(c / 10) - (floor(a / 10) + floor(b / 10) + floor(c / 10)) / 3, 2)) / 3));
    a = a - a / 10 * 10;
    b = b - b / 10 * 10;
    c = c - floor(c / 10) * 10;
    c = floor(c);

    printf("%.0lf %.2lf %.2lf\n", floor(a + b + c),
           (floor(a) + floor(b) + floor(c)) / 3,
           sqrt((pow(floor(a) - (floor(a) + floor(b) + floor(c / 1)) / 3, 2) +
                 pow(floor(b / 1) - (floor(a / 1) + floor(b / 1) + floor(c / 1)) / 3, 2) +
                 pow(floor(c / 1) - (floor(a / 1) + floor(b / 1) + floor(c / 1)) / 3, 2)) / 3));
    printf("%.2lf %.2lf %.2lf", a1 + b1 + c1, (a1 + b1 + c1) / 3,
           sqrt((pow(a1 - (a1 + b1 + c1) / 3, 2) + pow(b1 - (a1 + b1 + c1) / 3, 2) + pow(c1 - (a1 + b1 + c1) / 3, 2)) /
                3));
}