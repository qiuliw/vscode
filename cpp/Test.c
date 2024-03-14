#include <stdio.h>

int main(){
    char c;
    int count=0;
    while(scanf("%c",&c)){
        if(c=='\n')break;
        if(c>='a'&&c<='z'||c>='A'&&c<='Z')count++;
    }
    printf("%d",count);
    return 0;
}
