/*
下面的程序用于从键盘接收一个字符串（假设输入字符串长度在80以内），然后将自身逆置后复制到该串的末尾。请将其补充完整。
*/
#include <stdio.h>

int main(){
    char s[30],*p,*q;
    scanf("%s",s);
    p=s;
    while (*p)p++;
    q=p;
    p--;
    while(p>=s){
        *q=*p;
        p--;
        q++;
    }
    return 0;
}