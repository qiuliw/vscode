#include <stdio.h>
//将十进制数转换成任意进制数(16进制以内)
int main() {
    int i = 0, base, n, num[20];
    char k[16]; //16进制内符号数组
    for (int i = 0; i < 16; ++i) {
        if (i < 10)
            k[i] = '0' + i;
        else
            k[i] = 'A' + i - 10;
    }
    printf("输入一个十进制数:");
    scanf("%d", &n);
    printf("输入要转换的进制数:");
    scanf("%d", &base);
    while (n) {
        num[i++] = n % base;
        n /= base;
    }
    i--;
    while (i >= 0) {
        printf("%c", k[num[i--]]);
    }
}