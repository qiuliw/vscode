//编程：查找并返回字符串中第一个大写字母出现的位置，补全程序
#include <stdio.h>

char * find(char* p){
    while (*p) {
        if(*p>='A'&&*p<='Z')
            return p;
        p++;
    }
    return NULL;
}

int main(){
    char ch[100],*p=ch;
    scanf("%s",ch);
    p=find(p);
    if(p==NULL){
        printf("无大写字母");
    }else{
        puts(p);
    }
    return 0;
}