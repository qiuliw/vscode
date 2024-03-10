/*
从键盘录入10个成绩，去掉一个最高一个最低分，求平均值并输出
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[10], avg = 0, min, max;
    printf("请输入成绩");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        avg += a[i];
    }
    max = min = a[0];
    for (int i = 1; i < 10; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    avg = (avg - min - max) / 8;
    printf("平均分是%d", avg);
}