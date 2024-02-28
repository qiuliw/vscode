#include <stdio.h>
/*
编写函数判素数，主程序中给定某个正整数x，输出其所有素因子（约数是素数）
*/
int main(){
    int n,k;
    scanf("%d",&n);
    k=2;
    while(k!=n){
        if(n%k==0){
            printf("%d*",k);
            n=n/k;
        }else 
            k++;
    }
    printf("%d",n);
}