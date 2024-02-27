#include <stdio.h>
/*

学生信息包括姓名 （char-10）、学号（char-10）、3 门课成绩，从键盘输人50 个学生的数据，
要求打印出总分最高学生的学号、姓名及3门课成绩。
说明：最高分如有多人，分行打印
【输入样例】
张三 20190101 90 80 90 
李四 20190102 80 60 98 
王五 20190103 80 95 85
输出样例】
总分最高260，分别为：
张三 20190101 90 80 90 
王五 20190103 80 95 85
*/
#define N 50

typedef struct{
    char name[10];
    char no[10];
    int c1,c2,c3;
}Student;

int main(){
    Student s[N];
    int i,sum,max;
    for (i=0; i<N; ++i) {
        scanf("%s %s %d %d %d",s[i].name,s[i].no,&s[i].c1,&s[i].c2,&s[i].c3);
    }
    max=s[0].c1+s[0].c2+s[0].c3;
    for (i=1; i<N; ++i) {
        sum=s[i].c1+s[i].c2+s[i].c3;
        if(sum>max)max=sum;
    }
    printf("总分最高%d\n",max);
    
    for (i=0; i<N; ++i) {
        if( max== s[i].c1+s[i].c2+s[i].c3){
            printf("%s %s %d %d %d\n",s[i].name,s[i].no,s[i].c1,s[i].c2,s[i].c3);
        };
    }
    return 0;
}