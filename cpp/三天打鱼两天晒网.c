#include "stdio.h"
int main() {
    int a;
    scanf("%d", &a);
    switch (a % 5) {
        default:printf("晒网");break;
        case 1:
        case 2:
        case 3:printf("打鱼");break;
    }
}

void func2() {
    int a;
    scanf("%d", &a);
    a%=5;
    if(a==4||a==0)printf("打鱼");
    else printf("晒网");
}