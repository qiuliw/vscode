#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,t;
    scanf("%d,%d,%d",&a,&b,&c);
    t=b*b-4*a*c;
    if(t<0)
        printf("方程无实根");
    else{
        printf("r1=%f,r2=%f",(-b+sqrt(t))/2/a,(-b-sqrt(t))/2/a);
    }

}