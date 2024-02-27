#include <stdio.h>

/*
一球从100米高度自由落下，每次落地后反跳回原来高度的一半，再落下，
求它在第十次落地时，共经过多少米？第十次反弹多高？
*/

//法1
void func1() {
    double height = 100.0;       // 初始高度
    double total_distance = 0.0; // 总共经过的距离

    for (int i = 0; i < 10; i++) {
        total_distance += height; // 累加下落距离
        height /= 2.0;            // 计算反弹高度
        total_distance += height; // 累加反弹距离
    }
    total_distance-=height; //第十次不反弹

    // 输出结果
    printf("第十次落地时总共经过的距离：%.2lf 米\n", total_distance);
    printf("第十次反弹的高度：%.2lf 米\n", height);
}

//法2
void func2(){
    double sum = 100, h = 100;
    //从第二次落地开始计算第一次落地到第二次落地的过程
    for (int i = 0; i < 9; ++i) {
        sum += h; //每次反弹加落地等于上次落地高度
        h /= 2; //本次反弹高度
    }
    printf("总路程=%lf,第十次起跳距离=%lf", sum, h);
}