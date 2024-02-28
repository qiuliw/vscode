#include <stdio.h>
/*
输人一个正整数，按如下图形特点打印星图，如输人3，打印如下图形，补全程序
  *
 ***
*****
*/
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        for(j=0;j<n-i;++j)printf(" ");
        for(j=0;j<i*2-1;++j)printf("*");
        printf("\n");
    }

    return 0;
}