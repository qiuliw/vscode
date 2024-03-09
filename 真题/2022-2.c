// 1,12,123 
#include <stdio.h>

int main(){
    int n;
    double s,x;
    x=s=0;
    scanf("%d",&n);
    for (int i=1; i<=n; ++i) {
        x=x*10+i;
        s+=x;
    }
    printf("%lf",s);
    return 0;
}