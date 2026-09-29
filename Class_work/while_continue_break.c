#include <stdio.h>

int main(void)
{
    int i = 0;

    while (1)
    {
        i++;

        if (i == 11)
        {
            break;
        }

        if (i == 3)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}

