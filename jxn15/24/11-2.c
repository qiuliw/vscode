/*
计算以下数列前20项累加和
2/1,3/2,5/3,8/5 ...
*/
#include <stdio.h>

int main(){
    double f1,f2,sum;
    f1=2,f2=1,sum=0;
    for(int i=0;i<20;++i){
        sum+=f1/f2;
        f1=f1+f2;
        f2=f1-f2;
    }
    printf("%lf",sum);
    return 0;
}