/*
国家信息包括：国家名称（name），人口数量（num，单位：千万），平均寿命 （life，小数）。
输人 100 个国家信息，按国家名称字母顺序降序分行输出各国数据，格式为"x国人口xxx，平均寿命：xxx"
*/
#include <stdio.h>
#define N 100

typedef struct{
    char name[50];
    float num;
    float life;
} Country;

int main(){
    Country c[N];
    for (int i=0; i<N; ++i) {
        scanf("%s",c[i].name);
        scanf("%f",&c[i].num);
        scanf("%f",&c[i].life);
    }
    for(int i=0;i<N-1;++i){
        for(int j=i+1;j<N;++j){
            if(c[i].name[0]>c[j].name[0]){
                Country t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
    }
    for(int i=0;i<N;++i){
        printf("%s国人口%f,平均寿命%f",c[i].name,c[i].num,c[i].life);
    }

    return 0;
}
