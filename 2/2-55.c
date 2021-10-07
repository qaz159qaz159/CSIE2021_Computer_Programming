#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    switch ((a - 3) % 10) {
        case 1: {
            printf("¼×");
            break;
        }
        case 2: {
            printf("ÒÒ");
            break;
        }
        case 3: {
            printf("±û");
            break;
        }
        case 4: {
            printf("¶¡");
            break;
        }
        case 5: {
            printf("Îì");
            break;
        }
        case 6: {
            printf("¼º");
            break;
        }
        case 7: {
            printf("¸ý");
            break;
        }
        case 8: {
            printf("ÐÁ");
            break;
        }
        case 9: {
            printf("ÈÉ");
            break;
        }
        case 0: {
            printf("¹ï");
            break;
        }
    }
    switch ((a - 3) % 12) {
        case 1: {
            printf("×Ó");
            break;
        }
        case 2: {
            printf("³ó");
            break;
        }
        case 3: {
            printf("Òú");
            break;
        }
        case 4: {
            printf("Ã®");
            break;
        }
        case 5: {
            printf("³½");
            break;
        }
        case 6: {
            printf("ËÈ");
            break;
        }
        case 7: {
            printf("Îç");
            break;
        }
        case 8: {
            printf("Î´");
            break;
        }
        case 9: {
            printf("Éê");
            break;
        }
        case 10: {
            printf("ÓÏ");
            break;
        }
        case 11: {
            printf("Ðç");
            break;
        }
        case 0: {
            printf("º¥");
            break;
        }
    }
    printf("\n");
    switch ((a - 3) % 12) {
        case 1: {
            printf("Êó");
            break;
        }
        case 2: {
            printf("Å£");
            break;
        }
        case 3: {
            printf("»¢");
            break;
        }
        case 4: {
            printf("ÍÃ");
            break;
        }
        case 5: {
            printf("ýˆ");
            break;
        }
        case 6: {
            printf("Éß");
            break;
        }
        case 7: {
            printf("ñR");
            break;
        }
        case 8: {
            printf("Ñò");
            break;
        }
        case 9: {
            printf("ºï");
            break;
        }
        case 10: {
            printf("ëu");
            break;
        }
        case 11: {
            printf("¹·");
            break;
        }
        case 0: {
            printf("Øi");
            break;
        }
    }
}