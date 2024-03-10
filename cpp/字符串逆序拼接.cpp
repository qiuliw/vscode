/*
如输入"abcd",输出“abcddcba”
*/
#include <stdio.h>

int main() {
    char s[80], *q, *p;
    gets(s);
    q = s;
    while (*q)++q;//q指向中间左半边
    p = q--;//p指向中间右半边
    while (q >= s)
        *p++ = *q--;
    *p = '\0';
    puts(s);
}