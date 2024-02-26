#include <stdio.h>
/*
输人一串字符，分别统计字母、数字、空格及其他字符出现的次数。
*/
int main(){
    char s[30],*p;
    p=s;
    int a[4]={0};
    scanf("%s",s);
    while(*p){
        if(*p>='a'&&*p<='z'||*p>='A'&&*p<='Z')++a[0];
        else if(*p>='0'&&*p<='9')++a[1];
        else if(*p==' ')++a[2];
        else ++a[3];
    }
    printf("字母：%d\n数字：%d\n空格:%d\n其他：%d\n",a[0],a[1],a[2],a[3]);
    return 0;
}