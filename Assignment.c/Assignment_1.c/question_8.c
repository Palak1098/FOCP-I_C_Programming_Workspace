
#include <stdio.h>

int main()
{
    float basic, allowance, bonus, salary;

    printf("Enter basic salary, allowance and bonus: ");
    scanf("%f %f %f", &basic, &allowance, &bonus);

    salary = basic + allowance + bonus;

    printf("Final Salary = %.2f\n", salary);

    return 0;
}

