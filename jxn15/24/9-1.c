/*
中国有句俗语叫”三天打鱼两天哂网"。假设某人从某天起，开始"三天打鱼两天晒网"，
问这个人在以后的第x天（键盘输入）中是”打鱼"还是“晒网"？
*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    n%=5;
    if(n==4||n==0){
        printf("打鱼");
    }else{
        printf("晒网");
    }
    return 0;
}