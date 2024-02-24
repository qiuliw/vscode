#include <stdio.h>
#include <math.h>
// 用下面的公式求e^x的近似值，直到最后一项小于10^-6为止 e^x=1+x/1!+x^2/2!+……
int main(){
    float s=1,n=1,i=1,x;//n第n项,i第n项要乘的分母
    scanf("%f",&x);
    while (n>=1e-6){
        n*=x/i;
        s+=n;
        ++i;
    }
    printf("e^x的近似值为%f",s);
    return 0;
}