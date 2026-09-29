#include <stdio.h>

int main(void)
{
    int i = 1;

    while (1)
    {
        printf("%d\n", i);
        i++;

        if (i == 11)
        {
            break;
        }
    }

    return 0;
}