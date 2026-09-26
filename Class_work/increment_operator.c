#include <stdio.h>

int main()
{
    int x = 15;

    x = x + 1;
    printf("x = %d\n", x);

    x++;
    printf("x = %d\n", x);

    ++x;
    printf("x = %d\n", x);

    return 0;
}