#include <stdio.h>
#include <stdlib.h>

int prime(int n){
    if(n<=1)return 0;
    for(int i=2;i<n;i++)
        if(n%i==0) return 0;
    return 1;
}

int main()
{
    for(int i=101;i<=200;i++)
        if(prime(i))
            printf("%d",i);
    return 0;
}