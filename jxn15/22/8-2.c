// 删除字符串字符
//编程：从字符串中删除指定的字符，同一字符的大小写按不同字符处理
#include <stdio.h>
#include <string.h>

int main(){
    char s[80],*p,c;
    scanf("%s %c",s,&c);
    for (int i=0; i<strlen(s); i++) {
        if(s[i]==c){
            p=s+i;
            while (*p!='\0')
                *p=*(p+1);
        }
    }
    puts(s);
    return 0;
}