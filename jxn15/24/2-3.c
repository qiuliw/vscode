#include <stdio.h>
#define N 20
/*
定义恰当的结构体来保存学生的4门课成绩，从键盘输入20名学生的相关信息，计
算每个学生的平均成绩和不及格科目数并输出，
输出格式如下：张三平均分xx.xx（2 位小数），不及格科目数：2
*/

typedef struct {
  char name[10];
  float score[4];
} Student;

int main() {
  Student s[N];
  for (int i = 0; i < N; ++i) {
    scanf("%s", s[i].name);
    for (int j = 0; j < 4; ++j)
      scanf("%f", &s[i].score[j]);
  }
  for (int i = 0; i < N; ++i) {
    float sum = 0;
    int n = 0;
    for (int j = 0; j < 4; ++j) {
      sum += s[i].score[j];
      if (s[i].score[j] < 60)
        n++;
    }
    printf("%s平均分%.2f,不及格科目数:%d", s[i].name, sum / 4, n);
  }

  return 0;
}