#include <stdio.h>

int main(void)
{
    int age;
    float height;
    char grade;

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Height (in meters): ");
    scanf("%f", &height);

    printf("Enter Grade: ");
    scanf(" %c", &grade);

    printf("\nUser Details\n");
    printf("------------\n");
    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}