#include <stdio.h>

int main()
{
    int n;
    printf("请输入一个整数：");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}