//按要求实现字符串各种操作，补全函数
#include <stdio.h>

void strappend(char *p1, char *p2) {
    while (*p1)
        ++p1;
    while (*p2)
        *p1++ = *p2++;
}
void strasc(char *p) {
    //计算长度
    char *q = p;
    while (*q)
        ++q;
    int len = q - p;
    //选择排序
    for (int i = 0; i < len - 1; ++i) {
        for (int j = i + 1; j < len; ++j) {
            if (p[i] > p[j]) {
                char t = p[i];
                p[i] = p[j];
                p[j] = t;
            }
        }
    }
}

int main() {
    char ch[100] = "good morning", ch1[40] = "HAHAHa";
    strappend(ch, ch1); //字符串连接，将 ch1连接到 ch 后
    strasc(ch);         // 串字符升序排列，如 acb 转为 abc
    puts(ch);
}