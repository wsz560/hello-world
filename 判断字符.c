#include<stdio.h>
int main()
{
    char a;
    printf("请输入一个字符：");
    scanf("%c",&a);
    if(a>=48&&a<=57)
    {
        printf("该字符为数字");
    }
    else if(a>=65&&a<=90)
    {
        printf("该字符为大写字母");
    }
    else if(a>=97&&a<=122)
    {
        printf("该字符为小写字母");
    }
    else
    {
        printf("该字符为其他字符");
    }
    return 0;
}