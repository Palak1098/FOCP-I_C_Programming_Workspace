#include <stdio.h>

int main()
{
    int x = 15;

    printf("Prefix increment: %d\n", ++x);
    printf("Postfix increment: %d\n", x++);

    printf("Final value of x = %d\n", x);

    return 0;
}