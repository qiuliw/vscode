#include "string.h"
#include <stdio.h>

int main() {
    char ch[100], *p1, *p2, c;
    scanf("%s",ch);
    p1 = ch;
    p2 = ch + strlen(ch) - 1;
    while (p1++ < p2--) {
        c = *p1;
        *p1 = *p2;
        *p2 = c;
    }
    puts(ch);
    return 0;
}