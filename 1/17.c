#include <stdio.h>
#include <math.h>

int main() {
    double a;
    scanf("%lf", &a);
    printf("Original: %.2lf\n", a);
    printf("Adjusted: %.2lf(+%.0lf)", sqrt(a) * 10, sqrt(a) * 10 - a);
}