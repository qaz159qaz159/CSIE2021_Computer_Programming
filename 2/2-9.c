#include <stdio.h>
#include <math.h>

int main() {
    char a[128];
    long long int b = 0, intSum = 1, myInt = 0, pos, haveDot = 0, isNagative = 0;
    double floatSum = 1, myFloat = 0;
    do {
        scanf("%s", &a);
        if (a[0] == 'q') break;
        isNagative = 0;
        if (a[0] == '-') {
            isNagative = 1;
            for (int i = 0; i < 127; ++i) {
                a[i] = a[i + 1];
            }
        }
        myFloat = 0;
        myInt = 0;
        haveDot = 0;
        for (int i = 0; i < 128; ++i) {
            if (a[i] == '.') {
                haveDot = 1;
                for (int j = 0; j < i; ++j) {
                    myFloat += (int) (a[j] - '0') * pow(10, i - j - 1);
                }
                pos = i;
            }
            if (haveDot && a[i] == '\0') {
                int tmp = 1;
                for (int j = pos + 1; j < i; ++j) {
                    myFloat += ((double) a[j] - '0') * pow(0.1, j - pos);
                }
                floatSum *= myFloat;
                if (isNagative) floatSum *= -1;
                break;
            }
            if (!haveDot && a[i] == '\0') {
                for (int j = 0; j < i; ++j) {
                    myInt += ((int) a[j] - '0') * pow(10, i - j - 1);
                }
                intSum *= myInt;
                if (isNagative) intSum *= -1;
                break;
            }
        }
    } while (1);
    printf("%.2lf\n%lld\n", floatSum, intSum);
    floatSum = round(floatSum * 100) / 100;
    if (floatSum == intSum) printf("Float = Int");
    else if (floatSum < intSum) printf("Float < Int");
    else printf("Float > Int");
}