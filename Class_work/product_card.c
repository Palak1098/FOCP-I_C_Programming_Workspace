#include <stdio.h>
int main(void){
    char productName[] = "Notebook";
     int quantity = 5;
     float unitPrice = 75.50;
     char categoryCode = 'A';
     unsigned int stockCount = 100;

     printf("-----------------------------------------\n");
     printf("           PRODUCT DATA CARD\n");
     printf("-----------------------------------------\n");

     printf("%-20s : %s\n", "Product Name", productName);
     printf("%-20s : %d\n", "Quantity", quantity);
     printf("%-20s : Rs. %.2f\n", "Unit Price", unitPrice);
     printf("%-20s : %c\n", "Category Code", categoryCode);
     printf("%-20s : %u\n", "Stock Count", stockCount);

     printf("----------------------------------------\n");
     printf("Stock availability: 100%%\n");
     printf("\"Thank you for checking our product!\"\n");
     printf("----------------------------------------\n");
     return 0;
}