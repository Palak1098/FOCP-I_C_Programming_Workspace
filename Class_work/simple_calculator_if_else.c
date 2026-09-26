#include <stdio.h>

int main()
{
    int x, y;
    char operator;

    printf("Enter 1st number: ");
    scanf("%d", &x);

    printf("Enter 2nd number: ");
    scanf("%d", &y);

    printf("Enter operator [+, -, *, /, %%]: ");
    scanf(" %c", &operator);

    if (operator == '+')
    {
        printf("Result = %d\n", x + y);
    }
    else if (operator == '-')
    {
        printf("Result = %d\n", x - y);
    }
    else if (operator == '*')
    {
        printf("Result = %d\n", x * y);
    }
    else if (operator == '/' && y != 0)
    {
        printf("Result = %d\n", x / y);
    }
    else if (operator == '%' && y != 0)
    {
        printf("Result = %d\n", x % y);
    }
    else if ((operator == '/' || operator == '%') && y == 0)
    {
        printf("Cannot divide by zero\n");
    }
    else
    {
        printf("Invalid operator\n");
    }

    return 0;
}