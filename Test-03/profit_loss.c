#include <stdio.h>

int main () {
    float sales_price, original_price;
    printf("\n");

    printf("Enter the sale price of product: \n");
    scanf("%f", &sales_price);

    printf("Enter the original price of product: \n");
    scanf("%f", &original_price);

    float change = sales_price - original_price;
    float percent = (change / original_price) * 100;

    printf("\n");

    if (change > 0)
        printf("Profit: %0.2f", percent);
    else if (change < 0)
        printf("Loss: %0.2f", -percent);
    else
        printf("No gain/loss !");

    printf("\n");
    return  0;
}
