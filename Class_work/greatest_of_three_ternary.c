#include <stdio.h>

int main()
{
    int a, b, c;
    int greatest;

    printf("Enter Number a: ");
    scanf("%d", &a);

    printf("Enter Number b: ");
    scanf("%d", &b);

    printf("Enter Number c: ");
    scanf("%d", &c);

    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Greatest number among the entered 3 numbers is: %d\n", greatest);

    return 0;
}