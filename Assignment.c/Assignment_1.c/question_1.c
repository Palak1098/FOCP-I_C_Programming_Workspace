#include <stdio.h>

int main(void)
{
    int studentID;
    int age;
    float percentage;
    char grade;

    printf("Enter Student ID: ");
    scanf("%d", &studentID);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Percentage: ");
    scanf("%f", &percentage);

    printf("Enter Grade: ");
    scanf(" %c", &grade);

    printf("\nStudent Information\n");
    printf("-------------------\n");
    printf("Student ID: %d\n", studentID);
    printf("Age: %d\n", age);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}