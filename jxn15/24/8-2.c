#include <stdio.h>
#include <string.h>
#include "string.h"
#define N 20
/*
补全程序：输入N个字符串，输出其中最小的字符串
*/
int main(){
    char s[N][20],*p;
    int i,max=-1,imax=-1,len;
    for(i=0;i<N;++i){
        scanf("%s",s[i]);
        len=strlen(s[i]);
        if(max<len){
            max=len;
            imax=i;
        }
    }
    puts(s[imax]);
    return 0;
}