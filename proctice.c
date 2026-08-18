#include<stdio.h>
int main()
{
    int score;
    int count=0;  
    int sum=0;
    while(1)
    {
        printf("请输入成绩（-1退出):");
        scanf("%d",&score);

        if(score==-1)
        {
            break;
        }
        count++;
        sum = sum + score;
    }
    printf("总人数：%d\n", count);
    printf("总分：%d\n", sum);
    if (count > 0) {
        printf("平均分：%f\n", (float)sum / count);
    }
    return 0;
}