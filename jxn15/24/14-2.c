#include <stdio.h>
/*
计算输出 Fibonacci数列前20项，并按每行 4个数的格式输出。
*/
int fbnq(int n){
    if(n==1||n==2)return 1;
    return fbnq(n-1)+fbnq(n-2);
}

int main(){
    for(int i=1;i<=20;++i){
        printf("%d ",fbnq(i));
        if(i%4==0)printf("\n");
    }
    return 0;
}