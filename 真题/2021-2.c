//数列求和 1，-2,3，-4
#include <stdio.h>
int cal(int n){
    int i,s=0,f=1;// i为循环控制，s求和，f改变正负号
    for(i=1;i<=n;++i){
        s+=i*f;
        f*=-1;
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",cal(n));
    return 0;
}
