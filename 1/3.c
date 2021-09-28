//
// Created by qaz15 on 2021/9/27.
//

#include <stdio.h>

int main() {
    char str1[128], str2[128];
    long long int num;
    scanf("%s", &str1);
    scanf("%lld",&num);
    scanf("%s", &str2);
    printf("Name:%s\n", str1);
    printf("Age:%lld\n", num);
    printf("Gender:%s", str2);
}