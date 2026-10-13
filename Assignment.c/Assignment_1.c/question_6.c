
#include <stdio.h>

int main()
{
    int a, b, quotient, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    quotient = a / b;
    remainder = a % b;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}

