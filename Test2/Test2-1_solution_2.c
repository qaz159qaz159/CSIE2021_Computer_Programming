#include <stdio.h>

#define arraysize 1000001

int min(int a, int b) {
    if (a < b)
        return a;
    return b;
}

int main() {
    int n, arr[arraysize];
    scanf("%d", &n);
    int area = 0, high = 0;
    int temp, index[2] = {0}, x;
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            x = min(arr[i], arr[j]);
            temp = (j - i) * x;
            if (x > high) {
                high = x;
                area = temp;
                index[0] = i;
                index[1] = j;
            } else if (x == high) {
                if (temp > area) {
                    area = temp;
                    index[0] = i;
                    index[1] = j;
                }
            }
            if (x == arr[i] && x == arr[j])
                break;
        }
    }
    printf("%d %d\n%d\n", index[0], index[1], area);
    return 0;
}