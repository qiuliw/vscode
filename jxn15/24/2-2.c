#include <stdio.h>
void fun(char *p,char *q){
    while (*p!='\0'){
        if(*p<='9'&&*p>='0')*q++=*p;
        ++p;
    }
    *q='\0';
}

int main(){
    char ch1[100],ch2[20];
    scanf("%s",ch1);
    fun(ch1,ch2);//将ch1中所有数值型字符放入ch2中
    puts(ch2);
    return 0;
}