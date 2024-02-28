#include <stdio.h>
/*
写一个函数实现两个字符串的比较。即自己实现库函数 strcmp 函数。
函数原型为 strcmp（char *p1,char *p2）
，设 p1指向字符串 s1，p2指向字符串s2。要求当 s1=2 时，返回值为0；
若 s1<>s2，返回它们二者第一个不相同字符的 ASCII 码差值，若 s1>s2则输出正值， 如s1<s2 则输出负值。
*/

int sstrcmp(char* p1,char* p2){
    while(*p1==*p2&&*p1!='\0'){
        p1++;
        p2++;
    }
    return *p1-*p2;
}
int main(){
    char s1[20],s2[20];
    scanf("%s",s1);
    scanf("%s",s2);
    printf("%d",sstrcmp(s1, s2));
    return 0;
}