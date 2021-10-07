#include <stdio.h>
#include <math.h>

int func(int a, int b, int c) {
    int sum = a + b + c;
    double avg = (double) sum / 3;
    printf("%d %.2lf %.2lf\n",
           sum,
           avg,
           sqrt(((a - avg) * (a - avg) + (b - avg) * (b - avg) + (c - avg) * (c - avg)) / 3));
}

int main() {
    int a, b;
    double c, avg, sum;
    scanf("%d%d%lf", &a, &b, &c);
    for (int i = 1000; i >= 1; i /= 10) {
        func(a / i % 10, b / i % 10, (int) c / i % 10);
    }
    sum = a + b + c;
    avg = (double) sum / 3;
    printf("%.2lf %.2lf %.2lf\n",
           sum,
           avg,
           sqrt(((a - avg) * (a - avg) + (b - avg) * (b - avg) + (c - avg) * (c - avg)) / 3));
    return 0;
}