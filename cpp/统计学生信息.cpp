学生信息包括姓名、学号、3门课成绩，从键盘输人 10 个学生的数据，要求打印出总分最高学生的学号、姓名及3门课成绩。 说明;
最高分如有多人，分行打印

#include <stdio.h>

struct Student {
    char name[50];
    int studentNumber;
    float grades[3];
    float totalScore;
};

int main() {
    struct Student students[10];

    // 输入学生信息
    for (int i = 0; i < 10; ++i) {
        printf("请输入第%d个学生的姓名: ", i + 1);
        scanf("%s", students[i].name);

        printf("请输入第%d个学生的学号: ", i + 1);
        scanf("%d", &students[i].studentNumber);

        printf("请输入第%d个学生的3门课成绩（用空格分隔）: ", i + 1);
        for (int j = 0; j < 3; ++j) {
            scanf("%f", &students[i].grades[j]);
            students[i].totalScore += students[i].grades[j];
        }
    }

    // 查找总分最高的学生
    float maxScore = students[0].totalScore;
    for (int i = 1; i < 10; ++i) {
        if (students[i].totalScore > maxScore) {
            maxScore = students[i].totalScore;
        }
    }

    // 打印总分最高学生的信息
    printf("\n总分最高学生的信息:\n");
    for (int i = 0; i < 10; ++i) {
        if (students[i].totalScore == maxScore) {
            printf("学号: %d, 姓名: %s, 总分: %.2f\n", students[i].studentNumber, students[i].name, students[i].totalScore);
        }
    }

    return 0;
}
