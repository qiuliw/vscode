#include <stdio.h>
#include <stdlib.h>

void change(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
        change(&x,&y);
    if(y>z)
        change(&y,&z);
    printf("%d%d%d",x,y,z);

    return 0;
}