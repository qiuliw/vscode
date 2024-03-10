//输入一个正整数，计算这数是几位数
#include "stdio.h"
#define N 30

int main() {
    int a, n = 0;
    scanf("%d", &a);
    while (a) {
        a /= 10;
        n++;
    }
    printf("%d是%d位数", a, n);
}