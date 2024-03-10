//输入一串字符串，将其拷贝到自身后面 ABCD->ABCDABCD
#include "stdio.h"

int main() {
    char str[80], *p, *q;
    int len;
    len = 0;
    p = q = str;
    scanf("%s",str);
    while (*p) {
        len++;
        p++;
    }
    for (int i = 0; i < len; ++i)
        *p++ = *q++;
    *p = '\0';
    puts(str);
    return 0;
}