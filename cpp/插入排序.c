// 将一个数插入有序序列，向前逐个比较，不符合则将数后移留位置。
#include <stdio.h>

int main(){
    int i,a[10],n;
    for(i=0;i<9;i++)
        a[i]=i;
    scanf("%d",&n);
    for(i=8;i>=0;i--){
        if(n<a[i])
            a[i+1]=a[i];
        else
            break;
    }
    a[i+1]=n;

    return 0;
}