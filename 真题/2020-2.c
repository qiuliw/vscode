#include <stdio.h>

int main(){
    int i,j,max,x=0,y=0;
    int a[3][4]={{1,2,3,2},{5,6,7,8},{6,7,8,9}};
    max=a[0][0];
    for(i=0;i<3;++i){
        for(j=0;j<4;++j)
        if(a[i][j]>max){
            max=a[i][j];
            x=i;
            y=j;
        }
    }
    return 0;
}