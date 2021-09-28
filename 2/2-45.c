#include <stdio.h>
#include <math.h>

int main() {
    double a;
    scanf("%lf", &a);
    if (a <= 540000) {
        printf("5%c %.0lf %d %.0lf ", '%', a * 0.05, 0, a * 0.05);
    } else if (a <= 1210000) {
        printf("12%c %.0lf %d %.0lf ", '%', a * 0.12, 37800, a * 0.12 - 37800);
    } else if (a <= 2420000) {
        printf("20%c %.0lf %d %.0lf ", '%', a * 0.2, 134600, a * 0.2 - 134600);
    } else if (a <= 4530000) {
        printf("30%c %.0lf %d %.0lf ", '%', a * 0.3, 376600, a * 0.3 - 376600);
    } else if (a <= 10310000) {
        printf("40%c %.0lf %d %.0lf ", '%', a * 0.4, 829600, a * 0.4 - 829600);
    } else {
        printf("45%c %.0lf %d %.0lf ", '%', a * 0.45, 1345100, a * 0.45 - 1345100);
    }
}