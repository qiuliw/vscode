#include <stdio.h>
/*
論入10个整数存入数组a，再输入一个整数 x，在数组a中查找 x，找到输出x在10个数中的顺序找不到则输出“no found。

要求：在主函数输入数据，输出结果。在子函数中进行查找。

*/
int main(){
    int i,a[10],x;
    for (i=0; i<10; ++i) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for (i=0; i<10; ++i) {
        if(a[i]==x)break;
    }
    if(i<10){
        printf("%d",i);
    }else{
        printf("No found");
    }
    return 0;
}