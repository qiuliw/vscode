//编写函数fun()计算两个一维等长数组相应位置数是否相等，返回相等的个数
int fun(int *p,int *q,int n){
    int s=0;
    while(n--)
        if(*q++==*p++)
            s++;
    return s;
}
