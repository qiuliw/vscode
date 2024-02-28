#include <stdio.h>
/*
输人一串字符（个数小于100），可包含空格，回车结束，
分别统计字符串中 0-9 的出现次数并输出（没出现的不输出次数）
*/
int main(){
    char i,c;
    int a[10]={0};
    while((c=getchar())!='\n'){
        if(c>='0'&&c<='9'){
            a[c-'0']++;
        }
    }
    for(i=0;i<10;++i){
        if(a[i]!=0){
            printf("%d的个数是:%d\n",i,a[i]);
        }
    }
    return 0;
}