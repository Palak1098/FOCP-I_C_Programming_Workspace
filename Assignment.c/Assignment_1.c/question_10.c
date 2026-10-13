
#include <stdio.h>

int main()
{
    int id, quantity;
    float price, discount, subtotal, discount_amount, final_amount;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    printf("Enter Product Price: ");
    scanf("%f", &price);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Discount Percentage: ");
    scanf("%f", &discount);

    subtotal = price * quantity;
    discount_amount = subtotal * discount / 100.0;
    final_amount = subtotal - discount_amount;

    printf("\n----- INVOICE -----\n");
    printf("Product ID = %d\n", id);
    printf("Subtotal = %.2f\n", subtotal);
    printf("Discount Amount = %.2f\n", discount_amount);
    printf("Final Payable Amount = %.2f\n", final_amount);

    return 0;
}

