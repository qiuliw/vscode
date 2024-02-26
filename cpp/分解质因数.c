#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,k;
    scanf("%d",&n);
    k=2;
    while(k!=n){
        if(n%k==0){
            printf("%d*",k);
            n=n/k;
        }else 
            k++;
    }
    printf("%d",n);
}