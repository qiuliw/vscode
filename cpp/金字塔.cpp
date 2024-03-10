#include <stdio.h>
int main() {
    int n, i, j, k, l;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) //n层金字塔
    {
        for (j = 1; j <= n - i; j++) //每层左边空格数
            printf(" ");
        for (k = 1; k <= i; k++) //左边数字
            printf("%d", k);
        for (l = i - 1; l > 0; l--) //右边数字
            printf("%d", l);
        printf("\n");
    }
}
