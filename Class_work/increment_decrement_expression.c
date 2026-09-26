#include <stdio.h>

int main()
{
    int x = 10;
    int y = 2;
    int z = 5;

    int result = x++ + --y + ++z;

    printf("x = %d, y = %d, z = %d, result = %d\n",
           x, y, z, result);

    return 0;
}