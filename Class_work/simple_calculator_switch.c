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

    switch (operator)
    {
        case '+':
            printf("Result = %d\n", x + y);
            break;

        case '-':
            printf("Result = %d\n", x - y);
            break;

        case '*':
            printf("Result = %d\n", x * y);
            break;

        case '/':
            if (y != 0)
            {
                printf("Result = %d\n", x / y);
            }
            else
            {
                printf("Error! Cannot divide by zero.\n");
            }
            break;

        case '%':
            if (y != 0)
            {
                printf("Result = %d\n", x % y);
            }
            else
            {
                printf("Error! Cannot find modulus with zero.\n");
            }
            break;

        default:
            printf("ERROR! Input number/operator is invalid. Check again.\n");
            break;
    }

    return 0;
}