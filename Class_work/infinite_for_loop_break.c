#include <stdio.h>

int main(void)
{
    int i = 1;

    for (;;)
    {
        printf("%d\n", i++);

        if (i == 11)
        {
            break;
        }
    }

    return 0;
}