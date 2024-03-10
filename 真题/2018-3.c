/*
某大学正在举行歌唱比赛，现有10 位评委为学生评分，评分采用百分制。按如下规则计算学生的最终得分：先计算评委的分数之和，减去分数中的最高分与最低分，再除以8得到学生的成绩。请输入1位同学的10个分数，计算和输出学生的最终得分。下面给出了 mainO 函数，请将其他函数补充完整，即写出 inputO、 ssumO、 smax0 与 smin0 函数的定义。
*/

#include <stdio.h>
void input(int score[],int n){
    for(int i=0;i<n;++i){
        scanf("%d",score+i);
    }
}
int ssum(int score[],int n){
    int sum=0;
    for(int i=0;i<n;++i){
        sum+=score[i];
    }
    return sum;
}
int smax(int score[],int n){
    int max=score[0];
    for(int i=1;i<n;++i){
        if(score[i]>max)max=score[i];
    }
    return max;
}
int smin(int score[],int n){
    int min=score[0];
    for(int i=1;i<n;++i){
        if(score[i]<min)min=score[i];
    }
    return min;
}
int main(){
    int score[10],sum,max,min;
    float aver;
    input(score,10);//输入10 个评委的评分
    sum=ssum(score,10);// 计算10个评委的评分之和
    max=smax(score,10);// 计算最高分
    min=smin(score,10); //计算最低分
    aver=(sum-max-min)*1.0/(10-2);// 计算学生的最终得分
    printf("%f",aver);//输出学生的最终得分
}
