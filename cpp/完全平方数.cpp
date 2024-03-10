#include <math.h>
#include <stdio.h>

//判断完全平方数
int fun(int n) {
    int y = sqrt(n);
    if (y * y == n)
        return 1;
    return 0;
}

int main() {
    for (int i = 1; i < 1000; ++i) {
        if (fun(i))
            printf("%d ", i);
    }
}