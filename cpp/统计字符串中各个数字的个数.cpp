//未出现的不显示
#include <stdio.h>

int main() {
    char c;
    int a[10] = {0};
    while ((c = getchar()) != '#') {
        if (c <= '9' && c >= '0') {
            a[c - '0']++;
        }
    }
    for (int i = 0; i < 10; ++i) {
        if (a[i] == 0)
            continue;
        printf("含 %d 个数：%d\n", i, a[i]);
    }
}