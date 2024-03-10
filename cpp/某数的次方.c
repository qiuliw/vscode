#include "stdio.h"
int fun(int a, int n) {
    if (n == 0)
        return 1;
    for (int i = 0; i < n - 1; ++i) {
        a *= a;
    }
    return a;
}
int main() {
    int a, n;
    scanf("%d,%d", &a, &n);
    printf("%d 的 %d 次方为 %d", a, n, fun(a, n));
    return 0;
}