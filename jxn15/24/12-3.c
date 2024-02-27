/*
通过键盘输入一串字符序列，个数不定，回车结束，统计字符序列中英文字母个数并输出。
*/
#include <stdio.h>

int main(){
    int sum=0;
    char c;
    while((c=getchar())!='\n'){
        if(c>='a'&&c<='z'||c>='A'&&c<='Z')
            sum++;
    }
    printf("英文字母个数为：%d",sum);
    return 0;
}