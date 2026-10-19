#include <stdio.h>

int main()
{
    double a, b, c;
    double sum;

    printf("Enter three numbers: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter three numbers.\n");
        return 1;
    }

    sum = a + b + c;

    if (sum > 50) {
        printf("Sum is %.2f, which is greater than 50\n", sum);
    } else {
        printf("Sum is %.2f, which is not greater than 50\n", sum);
    }

    return 0;
}
