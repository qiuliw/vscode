//编程从键盘输入某年某月，输出该年的该月拥有的天数。
#include <stdio.h>

int main(){
    int year,month,day;
    scanf("%d %d",&year,&month);
    if(month==2){
        if(year%4==0&&year%100!=0||year%400==0){
            day=29;
        }else {
            day=28;
        }
    }else {
        switch (month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:day=31;break;
            default:day=30;
        }
    }
    printf("%d年%d月有%d天",year,month,day);
    
    return 0;
}