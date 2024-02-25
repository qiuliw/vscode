/*
编写函数 prime 判索数，在主程序中输人一个正整数，输出大玉给定整数且紧随这个整数的素数。
输入：2
输出：3
*/
#include <stdio.h>
int prime(int n){
    if(n<=1) return 0;
    for(int i=2;i<n;++i)
        if(n%2==0) return 0;
    return 1;
}
int main(){
    int a;
    scanf("%d",&a);
    for(int i=a+1;;++i){
        if(prime(i)){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}