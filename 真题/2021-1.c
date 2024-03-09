#include <stdio.h>
#define N 10
int main(){
    int i,j,a[N],t,flag;
    for(i=0;i<N;++i){
        scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;++i){
        for(j=1;j<N-i;++j){
            flag=0;
            if(a[j-1]>a[j]){
                flag=1;
                t=a[j-1];
                a[j-1]=a[j];
                a[j]=t;
            }
            if(!flag){
                break;
            }
        }
    }
    return 0;
}