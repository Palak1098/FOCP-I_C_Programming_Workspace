#include <stdio.h>

int main(void)
{
    int n = 7;
    double x = 12.345;
    char ch = 'Z';

    printf("n=%d\n", n);
    printf("x=%.2f\n", x);
    printf("[%5d]\n", n);
    printf("%c%d%%\n", ch, 80);

    return 0;
}