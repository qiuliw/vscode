#include <stdio.h>
#include <stdlib.h>

// y=x/2-1
// x=(y+1)*2

int main(){
    
    int i,sum=1;
    for(i=1;i<10;i++)
        sum=(sum+1)*2;
    printf("%d",sum);

    return 0;
}

 