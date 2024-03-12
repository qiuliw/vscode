#include <stdio.h>

int main(){
    int i,j;
    for(j=10;j<11;j++){
        for(i=9;i==j-1;i++){
            printf("%d",j);
        }
    }
    return 0;
}