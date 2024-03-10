#include <stdio.h>
/*
下面的程序用于从键盘接收一个字符串（假设输入字符串长度在80以内），
计算其长度并输出。请将其补充完整。
*/
int main(){
    char s[80],*p;
    p=s;
    scanf("%s",s);
    while(*p)p++;
    int len=p-s;
    printf("%d",len);
    return 0;
}