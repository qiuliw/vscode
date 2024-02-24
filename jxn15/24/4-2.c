#include <stdio.h>
/*
键盘输入二维数值数组数据，计算二维数值数组最大值并输出，补全程序。
*/
int main() {
  int i, j, x, y, b[3][4];
  x = y = 0;
  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 4; ++j) {
      scanf("%d", &b[i][j]);
      if (b[x][y] < b[i][j]) {
        x = i;
        y = j;
      }
    }
  }
  printf("max=%d", b[x][y]);
  return 0;
}