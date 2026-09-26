#include <stdio.h>

int main()
{
    int age;
    char nationality;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter nationality (I for Indian, O for Other): ");
    scanf(" %c", &nationality);

    if (age >= 18 && nationality == 'I')
    {
        printf("You are eligible to vote in India.\n");
    }
    else
    {
        printf("You are not eligible to vote in India.\n");
    }

    return 0;
}