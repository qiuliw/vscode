#include <stdio.h>
/*
（1）设计一个函数 int isprime（int x） 用于判断一个整数是否为素数，是素数返回1；否则返回0。（素数是只能被1和它自身整除的整数） Onistn biov

（2）在主函数中调用 isprime 函数，输出100~999之间的个位数字为3的所有素数及它们的和。

*/
int isprime(int n){
    if(n<=1) return 0;
    for(int i=2;i<n;++i)
        if(n%2==0) return 0;
    return 1;
}
int main(){
    int sum=0;
    for(int i=100;i<999;++i){
        if(i%10==3&&isprime(i)){
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}