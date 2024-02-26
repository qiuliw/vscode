/*
编写程序：输入N个字符串，输出其中长度最短的字符串，补全程序 【输人样例（N=3）】good 回车zoo 回车 bad 回车
【输出样例】最短串为：zoo bad
*/
#include <stdio.h>
#include <string.h>
#define N 10

int main(){
    char ch[N][20];
    int i,len;
    len=strlen(ch[0]);
    for (i=1; i<N; ++i) {
        if(strlen(ch[i])<len)len=strlen(ch[i]);
    }
    for (i=0; i<N; ++i) {
        if(strlen(ch[i])==len)puts(ch[i]);
    }
    return 0;
}