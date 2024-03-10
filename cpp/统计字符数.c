//遇到回车结束。不能用scanf %s，空格结束，有空格会被提前截断
#include "stdio.h"
int main() {
    int digit = 0;
    char c;
    while ((c = getchar()) != '\n')
        digit++;
    printf("%d", digit);
    return 0;
}