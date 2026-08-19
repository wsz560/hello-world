#include<stdio.h>
int main()
{
    float radius;
    float area;
    printf("请输入圆的半径：");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    printf("圆的面积是：%.2f",area);
    return 0;
}