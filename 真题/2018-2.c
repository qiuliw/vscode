// π^2/6 =1/n^2 + ...
#include <stdio.h>
#include <math.h>

int main(){
    float sum,n=1,t;
    t=1/pow(n,2);
    while(t>1e-5){
        sum+=t;
        n++;
        t=1/pow(n,2);
    }
    printf("%f",sum);

    return 0;
}