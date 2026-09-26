#include <stdio.h>

int main()
{
    int dayno;
    char isHoliday = 'n';

    printf("Enter week day: ");
    scanf("%d", &dayno);

    printf("Is Holiday (y/n): ");
    scanf(" %c", &isHoliday);

    if ((dayno == 2 || dayno == 3) &&
        !(isHoliday == 'y' || isHoliday == 'Y'))
    {
        printf("FOCP class scheduled\n");
    }
    else
    {
        printf("No FOCP class scheduled\n");
    }

    return 0;
}