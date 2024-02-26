/*
通过键盘向有序数组中插入一个数，需保证数组的有序性，
最后输出插入后的数组有效元素值，程序补全
例：a[10]={1,3,6,7}
输入：5
输出：1,3,5,6,7
*/
#include <stdio.h>
#define N 10

int s[N]={1,3,5,7},a=4;

int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<a;++i){
        if(n<s[i]){
            //后移留位
            for(j=a;j>i;--j){
                s[j]=s[j-1];
            }
            s[i]=n;//插入
            break;
        }
    }
    for(i=0;i<a+1;++i){
            printf("%d,",s[i]);
    return 0;
    }
}

