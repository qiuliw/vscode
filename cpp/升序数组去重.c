#include <stdio.h>

int myRemove(int nums[], int n){
    int i = 0; //慢指针，赋值
    if (n == 0)return 0;//判空
    for (int j = 0; j < n; ++j)
        if (nums[j] != nums[i])// j 快指针，判断重复元素
            nums[++i] = nums[j];//不重复则赋值
    return i + 1;
}

int main(){

    return 0;
}