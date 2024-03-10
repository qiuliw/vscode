#include <stdio.h>
#include <stdlib.h>

int func(int n){
    int a,b,c;
    a=n/100;
    b=n/10%10;
    c=n%10;
    if((a*a+b*b+c*c)==n)
        return 1;
    return 0;
}

int main(){
    for(int i=100;i<1000;i++)
        if(func(i))
            printf("%d ",i);
    return 0;
}