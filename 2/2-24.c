#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a >= 90) printf("4.3\nA+");
    else if (a >= 85) printf("4.0\nA");
    else if (a >= 80) printf("3.7\nA-");
    else if (a >= 77) printf("3.3\nB+");
    else if (a >= 73) printf("3.0\nB");
    else if (a >= 70) printf("2.7\nB-");
    else if (a >= 67) printf("2.3\nC+");
    else if (a >= 63) printf("2.0\nC");
    else if (a >= 60) printf("1.7\nC-");
    else printf("0\nF");
}