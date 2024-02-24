/*
计算数列：a+a^2+a^3+……+a^n的和，其中，a和n通过键盘输入
*/
#include <stdio.h>

int main(){
    int a,n,i,s=0,ai=1;
    scanf("%d %d",&a,&n);
    for(i=0;i<n;++i){
        ai*=a;
        s+=ai;
    }
    printf("%d",s);
    return 0;
}