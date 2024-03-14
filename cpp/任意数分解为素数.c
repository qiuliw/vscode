#include <stdio.h>

//任意大于2的偶数可以分解为两个素数之和，请验证

int main(){
    
    int n,n1,n2,i;
    printf("输入一个数");
    scanf("%d",&n);
    for(n1=2;n1<n/2;n1++){
        n2=n-n1;
        for(i=2;i<n1;i++)//判断n1是否素数
            if(n1%i==0) break;
        if(i<n1) 
            continue;//不是素数则不用判断n2是否素数
        for(i=2;i<n2;i++)//判断n2是否素数
            if(n2%i==0) break;
        if(i==n2){
            printf("%d=%d+%d",n,n1,n2);
            break;
        }
    }
    return 0;
}