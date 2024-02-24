/*
编写函数（fbng）求斐数列第 n项的值（要求使用 for 循环实现）.并在主函数中通过调用
fbng 计算并输出该数列前30项累加和。 斐波那契数列：1、1、2、3、5、8、13、21、34
*/
#include <stdio.h>

// 定义斐波那契数列函数
int fbng(int n) {
  if (n <= 0) {
    printf("Invalid input, n should be a positive integer.\n");
    return -1; // 返回错误标记
  }
  if (n == 1 || n == 2)
    return 1;

  int fib_sequence[30] = {1, 1}; // 初始化前两项为1
  for (int i = 2; i < n; i++) {
    fib_sequence[i] = fib_sequence[i - 1] + fib_sequence[i - 2];
  }
  return fib_sequence[n - 1];
}

int main() {
  int total_sum = 0;
  for (int i = 1; i <= 30; i++) {
    total_sum += fbng(i);
  }
  printf("The sum of the first 30 Fibonacci numbers is: %d\n", total_sum);

  return 0;
}