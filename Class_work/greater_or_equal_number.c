#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d is greater than the other number\n", a);
    }
    else if (a < b)
    {
        printf("%d is greater than the other number\n", b);
    }
    else
    {
        printf("Both the numbers are equal\n");
    }

    return 0;
}