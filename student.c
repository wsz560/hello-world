#include<stdio.h>
struct student
{
    char name[20];
    float score;
};
int main()
{
    struct student s[30];
    int n;
    printf("请输入学生人数(不超过30):");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
    printf("请输入第%d个学生的姓名:", i + 1);
    scanf("%s", s[i].name);
    printf("请输入第%d个学生的成绩:", i + 1);
    scanf("%f", &s[i].score);
}
    float sum = 0;
    float max = s[0].score;
    float min = s[0].score;
    for (int i = 0; i < n; i++) {
    sum += s[i].score;     

    if (s[i].score > max) {
        max = s[i].score;
    }
    if (s[i].score < min) {
        min = s[i].score;
    }
}
    printf("总分:%.2f\n", sum);
    printf("最高分:%.2f\n", max);
    printf("最低分:%.2f\n", min);
    printf("平均分:%.2f\n", sum / n);
    return 0;

}