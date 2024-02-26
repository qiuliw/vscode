#include <stdio.h>

int main() {
    int year,mon,day,mon2, num=0;
    printf("请输入您的生日，如2018 8 23\n");
    scanf("%d%d%d", &year, &mon, &day);
    
    //    if (year > 2022 || mon > 12 || day > 31) {
    //    printf("您输入的日期有误！\n");
    //    return 0;
    //}

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        mon2 = 29;
    } else
        mon2 = 28;

    switch (mon - 1) {
    case 11: num+=30;
    case 10: num+=31;
    case 9: num+=30;
    case 8: num+=31;
    case 7: num+=31;
    case 6: num+=30;
    case 5: num+=31;
    case 4: num+=30;
    case 3: num+=31;
    case 2: num+=mon2;
    case 1: num+=31;
    }
    printf("您的生日是%d年的第%d天", year, num + day);
    return 0;
}