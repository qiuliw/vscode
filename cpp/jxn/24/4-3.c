#include <stdio.h>
#define N 4
/*
为使电文保密，将电文中字母按一定规律进行转换，非字母保持不变， 字母转换规律如下：EaA,FaB,Aaw, DaZ, eaa,fab,aaw, daz
即将字母循环更改为其前第4个位置的字符（A-Z、a-z首尾相接），补全程序
*/
int main(){
    char text[10],*p;
    p=text;
    scanf("%s",text);
    while(*p){
        if ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z')) {
            // 判断字符是否为字母
            if (*p >= 'A' && *p <= 'Z') {
                // 大写字母
                *p = ((*p - 'A' + 4) % 26) + 'A';
            } else {
                // 小写字母
                *p = ((*p - 'a' + 4) % 26) + 'a';
            }
        }
        ++p;
    }
    puts(text);
    return 0;
}