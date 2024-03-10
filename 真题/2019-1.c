/*
计算输出 Fibonacci 数列前20项，并按每行4个数的格式输出。
*/
#include <stdio.h>

int f(int n){
    if(n==1||n==2)return 1;
    return f(n-1)+f(n-2);
}

int main(){
    for(int i=1;i<=20;++i){
        printf("%d ",f(i));    
        if(i%4==0)putchar('\n');
    }
    return 0;
}