/*
编写程序，用选择法将从键盘上输人的10个整数按升序排序并输出，数据间用空格分隔。
请将程序补充完整。【要求：为提高程序执行效率，每轮比较最多只进行一次数据交换】
*/
#include <stdio.h>
#define N 10
int main(){
    int a[10],i,j,index,t;
    for(i=0;i<10;++i){
        scanf("%d",&a[i]);
    }
    //选择排序
    for(i=0;i<N-1;++i){
        index=i;//找出最小数的索引
        for(j=i+1;j<N;++j){
            if(a[index]>a[j]){
                index=j;
            }
        }
        //交换
        if(index!=i){
            t=a[i];
            a[i]=a[index];
            a[index]=t;
        }
    }
    //打印
    for (i=0; i<N; ++i) {
        printf("%d ",a[i]);
    }
}