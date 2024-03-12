#include <stdio.h>
/*
有一分数序列 2/1,3/2,5/3,8/5,13/8... 求出这个数列的前20项之和。
*/
int main(){
    float i,f1=2,f2=1,sum=0;
    for(i=0;i<20;++i){
        sum+=f1/f2;
        f1+=f2;
        f2=f1-f2;
    }
    printf("%f",sum);
    return 0;
}