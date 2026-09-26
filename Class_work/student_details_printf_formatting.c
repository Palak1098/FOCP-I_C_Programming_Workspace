#include <stdio.h>

int main(void)
{
    char name[] = "Palak Yadav";
    int age = 17;
    float percentage = 98.787;

    printf("-----------------------\n");
    printf(" Student Details\n");
    printf("-----------------------\n");

    printf("Name       : %10s\n", name);
    printf("Age        : %10d\n", age);
    printf("Percentage : %10.2f\n", percentage);

    printf("-----------------------\n");

    return 0;
}