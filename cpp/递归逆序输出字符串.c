//输入一串字符串，逆序输出
#include <stdio.h>
#include <stdlib.h>

void reverse(char * sp){
    if(*sp=='\0'){
        return;
    }
    reverse(sp+1);
    printf("%c",*sp);
}

int main()
{
    char str[40];
    scanf("%s",str);
    reverse(str);

    return 0;
}