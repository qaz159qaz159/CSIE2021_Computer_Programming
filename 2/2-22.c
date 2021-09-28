#include <stdio.h>

int main() {
    double a, b, c;
    scanf("%lf%lf", &a, &b);
    c = b * 100 * 100 / a / a;
    printf("%.2lf\n", c);
    if (c < 18.5) {
        printf("Underweight");
    } else if (c < 24) {
        printf("Normal");
    } else if (c < 27) {
        printf("Overweight");
    } else if (c < 30) {
        printf("Obese Class I");
    } else if (c < 35) {
        printf("Obese Class II");
    } else {
        printf("Obese Class III");
    }
}