//编写函数(fun)判闰年，并在主程序中输出1900到2020 间所有闰年，每5个一行
#include <stdio.h>

int fun(int n) {
    return n % 4 == 0 && n % 100 != 0 || n % 400 == 0;
}
int main() {
    for (int i = 1900, j = 0; i < 2020; ++i) {
        if (fun(i)) {
            printf("%d ", i);
            ++j;
            if (j % 5 == 0)
                printf("\n");
        }
    }
    return 0;
}