#include "stdio.h"
int main(){
    int n,t,m;
    m=0;
    scanf("%d",&n);
    while(n){
        m=m*10+n%10;
        n/=10;
    }
    if(t==n)printf("%d是回文数",t);
    else printf("%d不是回文数",t);
}