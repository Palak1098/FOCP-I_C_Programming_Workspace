#include <stdio.h>

int main()
{
    int a;

    printf("Enter Number: ");
    scanf("%d", &a);

    if (a % 5 == 0)
    {
        printf("%d is divisible by 5\n", a);
    }
    else
    {
        printf("%d is not divisible by 5\n", a);
    }

    return 0;
}