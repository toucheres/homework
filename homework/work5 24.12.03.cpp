#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_M 5
#define MAX_N 100

struct Student {
    char id[6];            // 学号
    char name[11];         // 姓名
    float scores[MAX_M];   // 成绩
    float credits[MAX_M];  // 学分
    int extraScore;        // 附加成绩
    float totalScore;      // 学业成绩
};

int passedAllCourses(struct Student* stu, int M) {
    for (int i = 0; i < M; i++) {
        if (stu->scores[i] < 60)
            return 0;
    }
    return 1;
}

int compare(const void* a, const void* b) {
    struct Student* stuA = (struct Student*)a;
    struct Student* stuB = (struct Student*)b;
    if (stuA->totalScore < stuB->totalScore)
        return 1;
    else if (stuA->totalScore > stuB->totalScore)
        return -1;
    else
        return 0;
}

int main() {
    int N, M;
    float R;
    if (scanf("%d %d %f", &N, &M, &R) != 3) {
        printf("输入错误！\n");
        return 1;
    }
    if (N < 1 || N > 100 || M < 2 || M > 5 || R <= 0 || R >= 1) {
        printf("输入的N、M或R不符合要求！\n");
        return 1;
    }

    struct Student students[MAX_N];
    int totalStudents = 0;

    for (int i = 0; i < N; ++i) {
        struct Student stu;
        if (scanf("%s %s", stu.id, stu.name) != 2) {
            printf("输入错误！\n");
            return 1;
        }
        for (int j = 0; j < M; ++j) {
            if (scanf("%f %f", &stu.scores[j], &stu.credits[j]) != 2) {
                printf("输入错误！\n");
                return 1;
            }
            if (stu.scores[j] < 0 || stu.scores[j] > 100 || stu.credits[j] < 0.5 || stu.credits[j] > 10) {
                printf("成绩或学分输入不符合要求！\n");
                return 1;
            }
        }
        if (scanf("%d", &stu.extraScore) != 1) {
            printf("输入错误！\n");
            return 1;
        }
        if (stu.extraScore < 0 || stu.extraScore > 100) {
            printf("附加成绩输入不符合要求！\n");
            return 1;
        }
        float weightedScore = 0, totalCredit = 0;
        for (int j = 0; j < M; ++j) {
            weightedScore += stu.scores[j] * stu.credits[j];
            totalCredit += stu.credits[j];
        }
        if (totalCredit == 0) {
            printf("总学分为0，无法计算平均成绩！\n");
            return 1;
        }
        stu.totalScore = weightedScore / totalCredit + stu.extraScore;
        students[totalStudents++] = stu;
    }

    // 筛选课程成绩全部及格的学生
    struct Student eligibleStudents[MAX_N];
    int eligibleNum = 0;
    for (int i = 0; i < totalStudents; ++i) {
        if (passedAllCourses(&students[i], M)) {
            eligibleStudents[eligibleNum++] = students[i];
        }
    }

    if (eligibleNum == 0) {
        printf("-1\n");
        return 0;
    }

    // 计算推免人数
    int quota = (int)(N * R + 0.5); // 四舍五入
    if (quota < 1) quota = 1;
    if (quota > eligibleNum)
        quota = eligibleNum;

    // 按学业成绩降序排序
    qsort(eligibleStudents, eligibleNum, sizeof(struct Student), compare);

    // 输出前quota名学生
    for (int i = 0; i < quota; ++i) {
        printf("%s %s %.3f\n", eligibleStudents[i].id, eligibleStudents[i].name, eligibleStudents[i].totalScore);
    }

    return 0;
}
