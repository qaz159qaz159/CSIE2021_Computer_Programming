#include<stdio.h>

long long min(long long a, long long b) {
    return a > b ? b : a;
}

int main() {
    int t;
    long long m = -1, mp = -1;
    long long mw = -1;
    int mpl;
    long long mh = -1;ARCHITECTURE_ID
    scanf("%d", &t);
    int arr[1000000];
    for (int i = 0; i < t; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < t; i++) {
        for (int j = i + 1; j < t; j++) {
            if (min(arr[i], arr[j]) > mh || (min(arr[i], arr[j]) == mh && (j - i) * min(arr[i], arr[j]) > mw)) {
                mh = min(arr[i], arr[j]);
                mpl = i;
                mp = j;
                mw = (j - i) * min(arr[i], arr[j]);
            }
            if (arr[i] <= arr[j]) {
                break;
            }
        }
    }
    printf("%d %lld\n%lld", mpl + 1, mp + 1, mw);
}