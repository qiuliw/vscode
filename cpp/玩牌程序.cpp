/*

在玩牌程序中，每一组牌用数字 1 ~13 代表。输入数字，显示相应的牌。其中 2 ~10 直接显示数字，而数字 1、11、12、13 则分别用 Ace、Jack、Queen、King 来表示。61380
要求 : 键盘输入一组数字(空格分隔) ，根据数字显示相应牌说明 : 数字不在1 - 13 范围则程序结束

例 : 输入 1 2 12 14 回车，显示如下
Ace 
2 
Queen
*/
#include <stdio.h>

void display_card(int number) {
    switch (number) {
    case 1:
        printf("Ace\n");
        break;
    case 11:
        printf("Jack\n");
        break;
    case 12:
        printf("Queen\n");
        break;
    case 13:
        printf("King\n");
        break;
    default:
        if (number >= 2 && number <= 10) {
            printf("%d\n", number);
        } else {
            printf("输入数字不在1-13范围内，程序结束。\n");
        }
    }
}

int main() {
    int number;

    printf("请输入一组数字（空格分隔）：");

    while (scanf("%d", &number) == 1) {
        display_card(number);
    }

    return 0;
}