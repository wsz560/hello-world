#include<stdio.h>
int main()
{
    double c;
    double f;
    printf("请输入摄氏温度：");
    scanf("%lf",&c);
    f=c*9/5+32;
    printf("华氏温度为%.2f",f);
    return 0;
}