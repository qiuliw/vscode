#include <stdio.h>
#include <math.h>

double pi(long n){
    double s=0;
    long i;
    for (i=1; i<=n; ++i) {
        s=s+1.0/(i*10+2);
    }
    return sqrt(s*6);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%lf",pi(n));
}