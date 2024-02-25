//键盘输人一串字符序列，希望将字符串逆序存放并输出逆序串，如输人"abcd"，输出 "dcba"。补全程序
#include <stdio.h>

int main(){
    char s1[30],s2[30],*p1,*p2;
    scanf("%s",s1);
    p1=s1;
    p2=s2;
    while (*p1) {
        ++p1;
    }
    --p1;
    while (p1>=s1) {
        *p2++=*p1--;
    }
    *p2='\0';
    return 0;
}