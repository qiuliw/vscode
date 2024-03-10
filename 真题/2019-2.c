/*
学校在1000 名师生中发起慈善捐款，自愿募捐、款数不限，总数超过20000（2 万）元活动结束。编写程序，统计参与捐款的师生人数及捐款总数（精确到角币，即保留1位小数）。
*/
#include <stdio.h>

int main(){
    int i,nsum=0;
    float sum=0;
    for(i=0;i<1000;++i){
        scanf("%f",&sum);
        nsum++;
        if(sum>20000)break;
    }
    printf("捐款人数%d, 捐款金额%.1f",nsum,sum);
    return 0;
}
