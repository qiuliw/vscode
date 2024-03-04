/*
n人围一圈，从第一人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是哪位
*/
#include <stdio.h>
#include <stdlib.h>
#define nmax 50


int main()
{
    int i,k,m,num[nmax];
    for(i=0;i<nmax;i++){
        num[i]=i+1;
    }
    i=0;
    m=50;//剩余人数
    k=0;//报数
    while(m>1){//剩1人
        //如果不为0即未出队，报数，统计
        if(num[i]!=0){
            k++;
            if(k==3){
                num[i]=0;//出队
                k=0;//重新报数
                m--;//剩余人数-1
            }
        }
        ++i;
        i%=nmax;//下一个人
    }

    //剩一人
    for(i=0;i<nmax;i++)
        if(num[i]!=0)
            printf("%d ",num[i]);

}