#include <stdio.h>
#define R 3
#define C 4
// 键盘输入二维数据，输出每行的最大值

int main(){
    float b[R][C],max;
    int i,j;
    for (i=0; i<R; ++i) {
        for (j=0; j<C; ++j) {
            scanf("%f",&b[i][j]);
            if(j==0)
                max=b[i][j];
            else
                if(b[i][j]>max)max=b[i][j];
        }
        printf("第%d行最大值：%f\n",i,max);
    }
    return 0;
}