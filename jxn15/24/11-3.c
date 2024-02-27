/*
N人参加自由操比赛，6名裁判进行打分（分值含小数），
打分后，去掉一个最高分和一个最低分，其余4个成绩之和为参赛者最终得分。
打分完毕后依次输出每个参赛者数据。补全程序。

数据输人格式：
    张三 
    1 2 3 4 5 6（空格分隔） 
    李四
    1 2 3 4 5 6
输出格式：
    张三总分：xx.x（保留 1位小数）
    李四总分：xx.x（保留 1位小数）
*/
#include <complex.h>
#include <stdio.h>
#define N 10

typedef struct{
    char name[10];
    float result;
}Driver ;

int main(){
    Driver ds[N];
    int max,min,sum,score[6];
    int i,j;
    for (i=0; i<N; ++i) {
        sum=0;
        scanf("%s",ds[i].name);
        for (j=0; j<6; ++j) {
            scanf("%d",&score[j]);
            sum+=score[i];
        }
        max=min=score[0];
        for (i=1; i<N; ++i) {
            if(score[i]>max)max=score[i];
            if(score[i]<min)min=score[i];
        }
        sum-=max+min;
        ds[i].result=sum;
    }
    for (i=0; i<N; ++i) {
        printf("%s 总分：%.1f\n",ds[i].name,ds[i].result);
    }

    return 0;
}