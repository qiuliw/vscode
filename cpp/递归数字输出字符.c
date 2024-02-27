#include <stdio.h>

void fun(int n){
    if(n/10!=0)
        fun(n/10);
    printf("%c",n%10+'0');
}

int main(){
    int a;
    scanf("%d",&a);
    fun(a);
    return 0;
}