#include <stdio.h>
void fun(char *s,char *t){
    int i=0,j=0;
    while(*(s+i))i++;
    while ((s[i++]=t[j++]));   
}
int main(){
    
    return 0;
}