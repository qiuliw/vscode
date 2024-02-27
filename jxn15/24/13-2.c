/*
从键盘录人10个成绩，去掉一个最高分和一个最低分，求其余成绩的平均分并输出（保留一位小数），
补全程序。
*/
#include <stdio.h>

int main(){
    int sum,i,min,max,a[10];
    sum=0;
    for (i=0; i<10; ++i) {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    max=min=a[0];
    for(i=0;i<10;++i){
        if(max<a[i])max=a[i];
        if(min>a[i])min=a[i];
    }
    printf("平均分是%.1f\n",(sum-min-max)/8.0);
    
    return 0;
}