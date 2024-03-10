#include <stdio.h>
#include <math.h>
// 三角形面积
int main(){
    float a,b,c,s;
    scanf("%f %f %f",&a,&b,&c);
    if(a+b<c||a+c<b||b+c<a){
        printf("False\n");
    }else{
        s=(a+b+c)/2;
        printf("%.2f\n",sqrt(s*(s-a)*(s-b)*(s-c)));
    }
    return 0;
}