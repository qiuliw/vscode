#include <stdio.h>
#include <math.h>
double f(double x){
    if(x<=-2){
        return 3-exp(2*x+1);
    }else if(x<=3&&x>-2){
        return 2*x-1;
    }else{
        return 2*log10(3*x+5)-11;
    }
}

int main(){
    double n;
    scanf("%lf",&n);
    printf("%lf",f(n));
    return 0;
}