/*
编写程序，求 s=a+aa+aaa+aaaa+aa..a 的值，其中a是一个数字。a的值及数的个数n由键盘输人。
【输入样例】2,3 // 表示 2+22+222
【输出样例】246
【输入样例】3,2 / 表示 3+33
（输出样例】36
*/
#include <stdio.h>

int main(){
    int a,s,n;
    s=0;
    scanf("%d %d",&a,&n);
    for (int i=0; i<n; ++i) {
        s+=a;
        a=a*10+a%10;
    }
    printf("%d",s);
    return 0;
}