#include <stdio.h>

void f(char a[]) {
    long long int b = 0;
    for (int i = 0; i < 10; ++i) {
        if (a[i] == '\0' && i != 9) {
            printf("fake");
            return;
        }
    }
    if (a[0] == 'a' || a[0] == 'A') b += 1;
    else if (a[0] == 'b' || a[0] == 'B') b += 10;
    else if (a[0] == 'c' || a[0] == 'C') b += 19;
    else if (a[0] == 'd' || a[0] == 'D') b += 28;
    else if (a[0] == 'e' || a[0] == 'E') b += 37;
    else if (a[0] == 'f' || a[0] == 'F') b += 46;
    else if (a[0] == 'g' || a[0] == 'G') b += 55;
    else if (a[0] == 'h' || a[0] == 'H') b += 64;
    else if (a[0] == 'i' || a[0] == 'I') b += 39;
    else if (a[0] == 'j' || a[0] == 'J') b += 73;
    else if (a[0] == 'k' || a[0] == 'K') b += 82;
    else if (a[0] == 'l' || a[0] == 'L') b += 2;
    else if (a[0] == 'm' || a[0] == 'M') b += 11;
    else if (a[0] == 'n' || a[0] == 'N') b += 20;
    else if (a[0] == 'o' || a[0] == 'O') b += 48;
    else if (a[0] == 'p' || a[0] == 'P') b += 29;
    else if (a[0] == 'q' || a[0] == 'Q') b += 38;
    else if (a[0] == 'r' || a[0] == 'R') b += 47;
    else if (a[0] == 's' || a[0] == 'S') b += 56;
    else if (a[0] == 't' || a[0] == 'T') b += 65;
    else if (a[0] == 'u' || a[0] == 'U') b += 74;
    else if (a[0] == 'v' || a[0] == 'V') b += 83;
    else if (a[0] == 'w' || a[0] == 'W') b += 21;
    else if (a[0] == 'x' || a[0] == 'X') b += 3;
    else if (a[0] == 'y' || a[0] == 'Y') b += 12;
    else if (a[0] == 'z' || a[0] == 'Z') b += 30;
    b += (a[1] - '0') * 8 + (a[2] - '0') * 7 + (a[3] - '0') * 6 + (a[4] - '0') * 5 + (a[5] - '0') * 4 +
         (a[6] - '0') * 3 + (a[7] - '0') * 2 + (a[8] - '0') + (a[9] - '0');
    if (b % 10 == 0) {
        printf("real");
        return;
    }
    printf("fake");
    return;
}

int main() {
    do {
        char a[128] = {'\0'};
        scanf("%s", &a);
        if (a[0] == '-' && a[1] == '1') break;
        f(a);
        printf("\n");
    } while (1);
}