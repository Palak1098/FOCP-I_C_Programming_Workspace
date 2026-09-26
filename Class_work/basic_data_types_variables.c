#include <stdio.h>

int main(void)
{
    int age = 18;
    unsigned int attempts = 3;
    double percentage = 87.50;
    char grade = 'A';
    char name[] = "Riya";

    printf("Name       : %s\n", name);
    printf("Age        : %d\n", age);
    printf("Attempts   : %u\n", attempts);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);

    return 0;
}