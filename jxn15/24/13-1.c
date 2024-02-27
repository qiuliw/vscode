/*
一球从100 米高度自由落下，每次落地后反跳回原来高度的二半，
再落下，求它在第十次落地时，共经过多少米？第十次反弹多高？（保留 2位小数）
*/
#include <stdio.h>

int main(){
    double sum = 0, h = 100;
    for (int i = 0; i < 10; ++i) {
        sum += h; //下落
        h/=2;
        sum +=h;//反弹
    }
    sum-=h;//第10次不反弹
    printf("总路程=%lf,第十次起跳距离=%lf", sum, h);
}