
#include <stdio.h>

int main()
{
    int price = 0;
    printf("请输入价格:");
    scanf("%d", &price);
    int change = 100 - price;
    printf("找零: %d\n", change);
    return 0;
}