#include <stdio.h>

int main()
{
    char id[10], password[10];

    printf("Enter User ID: ");
    scanf("%s", id);

    printf("Enter Password: ");
    scanf("%s", password);

    if (id[0] == 'p' && id[1] == 'a' && id[2] == 'l' &&
        id[3] == 'a' && id[4] == 'k' && id[5] == '\0')
    {
        if (password[0] == '1' && password[1] == '2' &&
            password[2] == '3' && password[3] == '4' &&
            password[4] == '\0')
        {
            printf("Login Successful\n");
        }
        else
        {
            printf("Incorrect Password\n");
        }
    }
    else
    {
        printf("Invalid User ID\n");
    }

    return 0;
}