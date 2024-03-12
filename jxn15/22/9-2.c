/*
2.编程：输入一正整数，输出1至该数之间的所有素数之和。 要求：在主函教中输入和输出：用子函数求素数。
*/
#include <stdio.h>

int prime(int n){
    if(n<=1)return 0;
    for(int i=2;i<n;i++)
        if(n%i==0) return 0;
    return 1;
}

int main(){
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;++i){
        if(prime(i))sum+=i;
    }
    printf("%d",sum);
    return 0;
}