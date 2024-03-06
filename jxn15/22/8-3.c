#include <stdio.h>
/*
求 π/2 = 1 + 1/3 + (1*2)/(3*5) + (1*2*3)/(3*5*7) + ... 
到某项小于1e-6
*/
int main(){
    double sum,f,f1,f2;
    f1=f2=1;
    f=1;
    sum=0;
    while (f>=1e-6) {
        sum+=f;//先+后变，+的已经验证过大于1e-6
        f*=f1/f2;
        f1++;
        f2+=2;
    }
    return 0;
}