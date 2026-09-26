#include <stdio.h>

int main()
{
    float marks, percentage;
    float maxMarks;

    printf("Enter marks obtained: ");
    scanf("%f", &marks);

    printf("Enter maximum marks: ");
    scanf("%f", &maxMarks);

    percentage = (marks / maxMarks) * 100;

    if (percentage >= 90)
    {
        printf("Grade = A\n");
    }
    else if (percentage >= 80)
    {
        printf("Grade = B\n");
    }
    else if (percentage >= 70)
    {
        printf("Grade = C\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade = D\n");
    }
    else if (percentage >= 50)
    {
        printf("Grade = E\n");
    }
    else
    {
        printf("Grade = F\n");
    }

    return 0;
}