#include <stdio.h>

int main(){
    char s[80],*p,*q;
    p=q=s;
    double ten=0;
    scanf("%s",s);
    while(*p){
        if(*p>='0'&&*p<='9'){
            ten=ten*16+*p-'0';
            *q++=*p;
        }else if(*p>='a'&&*p<='f'){
            ten=ten*16+*p-'a'+10;
            *q++=*p;
        }else if(*p>='A'&&*p<='F'){
            ten=ten*16+*p-'A'+10;
            *q++=*p;
        }
        p++;
    }
    *q='\0';
    printf("%lf\n",ten);
}