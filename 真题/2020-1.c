/*
编写程序，从键盘上接收一个百分制成绩（整数），判断数据的合理性。
如果不是正确的成绩（<0或>100），则输出“Error data！”，否则输出其相应的等级，
成绩在90 分及以上为'A'，80~89分为'B'，70~79分为C'，60~69分为'，60分以下为 E’。
例如：
（1） 输入成绩为 120时，输出 Error data！
（2） 输入信息为 85 时，输出B
*/
#include <stdio.h>

int main(){
    int n;
    char c;
    scanf("%d",&n);
    switch (n/10) {
        case 9 : printf("A");break;
        case 8 : printf("B");break;
        case 7 : printf("C");break;
        case 6 : printf("D");break;
        case 5 :
        case 4 :
        case 3 :
        case 2 :
        case 1 : printf("E");break;
        default: printf("Error data!");
    }
    return 0;
}