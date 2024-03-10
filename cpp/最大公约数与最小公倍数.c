#include <stdio.h>
#include<stdio.h>

int main(){

    int m,n,t,a,b;
    scanf("%d %d",&m,&n);
    a=m;
    b=n;
    t=1;
    while (t != 0){
        t = m % n;
        m = n;
        n = t;
    }
    printf("最大公约数是:%d\n", m);//最后m为最大公约数

    //公式法：两个数的乘积等于这两个数的最大公约数与最小公倍数的积。
    printf("最小公倍数是:%d\n", a * b / m );
    
    return 0;
}