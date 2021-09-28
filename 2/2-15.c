#include <stdio.h>

int main() {
    double a, b = 0;
    char c;
    scanf("%lf%lf %c", &a, &b, &c);
    if (c == '+') printf("%.2lf + %.2lf = %.2lf", a, b, a + b);
    else if (c == '-') printf("%.2lf - %.2lf = %.2lf", a, b, a - b);
    else if (c == '*') printf("%.2lf * %.2lf = %.2lf", a, b, a * b);
    else if (c == '/') printf("%.2lf / %.2lf = %.2lf", a, b, a / b);
}