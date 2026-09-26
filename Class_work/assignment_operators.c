#include <stdio.h>

int main()
{
    int x = 15;

    printf("x = %d\n", x);

    x += 5;   // same as x = x + 5
    printf("x = %d\n", x);

    x -= 3;   // same as x = x - 3
    printf("x = %d\n", x);

    x *= 2;   // same as x = x * 2
    printf("x = %d\n", x);

    x /= 5;   // same as x = x / 5
    printf("x = %d\n", x);

    x %= 6;   // same as x = x % 6
    printf("x = %d\n", x);

    return 0;
}