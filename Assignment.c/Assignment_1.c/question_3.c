#include <stdio.h>

int main(void)
{
    float price;
    int quantity;
    float totalBill;

    printf("Enter price of one item: ");
    scanf("%f", &price);

    printf("Enter quantity purchased: ");
    scanf("%d", &quantity);

    totalBill = price * quantity;

    printf("\nBill Details\n");
    printf("------------\n");
    printf("Price: %.2f\n", price);
    printf("Quantity: %d\n", quantity);
    printf("Total Bill: %.2f\n", totalBill);
    return 0;
}