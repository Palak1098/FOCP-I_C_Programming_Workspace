#include <stdio.h>

int main()
{
    int dayno;

    printf("Enter day number (1-7): ");
    scanf("%d", &dayno);

    if (dayno == 1)
    {
        printf("Monday\n");
    }
    else if (dayno == 2)
    {
        printf("Tuesday\n");
    }
    else if (dayno == 3)
    {
        printf("Wednesday\n");
    }
    else if (dayno == 4)
    {
        printf("Thursday\n");
    }
    else if (dayno == 5)
    {
        printf("Friday\n");
    }
    else if (dayno == 6)
    {
        printf("Saturday\n");
    }
    else if (dayno == 7)
    {
        printf("Sunday\n");
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}