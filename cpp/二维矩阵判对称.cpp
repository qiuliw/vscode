#include <stdio.h>
#include <stdlib.h>
#define N 10
int main() {
    int a[N][N];
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            scanf("%d", &a[i][j]);
    int flag = 1;
    for (int i = 1; i < N; ++i) {
        for (int j = 0; j < i; ++j)
            if (a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        if (flag == 0)
            break;
    }
    if (flag == 0)
        printf("不对称");
    else
        printf("对称");
}