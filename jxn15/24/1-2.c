#include <stdio.h>
#include <stdlib.h>
/*
编写函数（fun）判断一个正整数是否为完数，并在主程序中打印2到100以内所有完数。
完数一个数如果恰好等于它的因子之和，称该数为“完数”如 6=1+2+3，则6为完数。
（1 不是完数）
*/
int fine(int n){
    int sum=0;
    for(int i=1;i<n;++i)
        if(n%i==0)sum+=i;
    return sum==n;
}

int main(){   
    for(int i=2;i<1000;++i)
        if(fine(i))
            printf("%5d",i);
}