#include<stdio.h>
int main()
{
    int a;
    printf("请输入成绩：");
    scanf("%d",&a);
    if(a>=90&&a<=100)
    {
        printf("优秀");
    }
    else if(a>=80&&a<=89)
    {
        printf("良好");
    }
    else if(a>=60&&a<=79)
    {
        printf("及格");
    }
    else if(a<=60)
    {
        printf("不及格");
    }
    return 0;
}