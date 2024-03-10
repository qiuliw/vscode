#include <stdio.h>
/*
（1）设计一个函数 int isprime（int x）用于判断一个整数是否为素数，是素数返回1， 否则返回0。（素数是只能被1 和它自身整除的整数）
（2） 在主函数中调用isprime 函数，输出 100~999之闻的个位数字为7的所有素数之和。
*/
int isprime(int n){
    if(n<=1) return 0;
    for(int i=2;i<n;++i)
        if(n%2==0) return 0;
    return 1;
}

int main(){
    int i,sum=0;
    for(i=100;i<=999;++i){
        if(i%10==7)
            if(isprime(i))
                sum+=i;
    }
    printf("%d",sum);
    return 0;
}
